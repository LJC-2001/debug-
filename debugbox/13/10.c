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

    // 真真真真真真�
    temp = (Node *) malloc(sizeof(Node));
    head = temp;
    head->data = 1;

    // 真� 2 真 n 真真真真�
    for(i = 2; i <= n; i++) {
        new_node = (Node *) malloc(sizeof(Node));
        new_node->data = i;
        temp->next = new_node;
        temp = new_node;
    }

    // 真真真真真真真真
    temp->next = head;

    return head;
}

void count_off(Node *head, int n, int k, int m) 
{
	int i;
    Node *temp, *pre, *p;
    pre = head;
    temp = head;
    
    for (i = 1 ; i < k; i++) {
    	pre = temp;
        temp = temp -> next;
    }
    if (k == 1) {
    	while (pre -> next != head) {
    	    pre = pre -> next ;
	}
    } 
    int num = 0;
    
    while (num < n) {
        if (m == 1) {   	
            if (num == n - 1) {
                printf("%d", temp -> data);
            } else {
                printf("%d ", temp -> data);
            }
            p = temp;
            pre -> next  = temp -> next;
            temp = temp -> next; 
            free(p);
            num++;
        } else {
            for (i = 1 ; i < m; i++) {
                pre = pre -> next;
            }
            temp = pre -> next;
            if (num == n - 1) {
                printf("%d", temp -> data);
            } else {
                printf("%d ", temp -> data);
            }
            pre -> next = temp -> next;
            p = temp;
            temp = pre -> next ;
            free(p);
            num++;
        }
    }    
    return 0;
}
