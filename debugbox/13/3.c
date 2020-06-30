#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *next;
} Node;

Node *circle_create(int n);
void count_off(Node *head, int n, int k, int m);

int main()
{
    int n, k, m;
    scanf("%d%d%d", &n, &k, &m);
    Node *head = circle_create(n);
    count_off(head, n, k, m);
    return 0;
}

Node *circle_create(int n)
{
    Node *temp, *new_node, *head;
    int i;

    temp = (Node *) malloc(sizeof(Node));
    head = temp;
    head -> data = 1;

    for (i = 2; i <= n; i++) {
        new_node = (Node *) malloc(sizeof(Node));
        new_node -> data = i;
        temp -> next = new_node;
        temp = new_node;
    }

    temp -> next = head;

    return head;
}

void count_off(Node *head, int n, int k, int m)
{
    int x, y;
    Node *find;
    Node *temp;
    temp = head;
    int sign[1000] = {0};
    for (y = 0; y <= n; y++) {
        if (y == 0) {
            for (x = 0; x < k; x++) {
                find = temp;
                temp = temp -> next;
            }
        } else {
            for (x = 1; x < m; x++) {
                find = temp;
                do{
                    temp = temp -> next;
                }while(sign[temp->data] == 1);
                if (sign[find -> data] == 1) {
                    x--;
                }
            }
            sign[find -> data] = 1; 
            printf("%d", find -> data);
            find = temp;
            temp = temp -> next;
            if (y != n) {
                printf(" ");
            }
        }
       
    }  

    return;
}
