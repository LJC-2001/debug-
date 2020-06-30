#include <stdio.h>
#include <stdlib.h>
typedef struct node {
    int data;
    struct node *next;
} Node;

Node *circle_create(int n);
void count_off(Node *head, int n, int k, int m);
void Destroy(Node *head);

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

    // ¿¿¿¿¿¿¿¿¿¿¿¿¿
    temp = (Node *) malloc(sizeof(Node));
    head = temp;
    head->data = 1;

    // ¿¿¿ 2 ¿¿ n ¿¿¿¿¿¿¿¿¿
    for (i = 2; i <= n; i++) {
        new_node = (Node *) malloc(sizeof(Node));
        new_node->data = i;
        temp->next = new_node;
        temp = new_node;
    }

    // ¿¿¿¿¿¿¿¿¿¿¿¿¿¿¿¿
    temp->next = head;

    return head;
}

void count_off(Node *head, int n, int k, int m) 
{
    int counter = 0;
    int i, j;
    Node *temp, *flag, *p;
    temp = head;
    //¿¿k¿¿¿¿¿ 
    while (counter < k - 1) {
        temp = temp->next;
        counter++;
    } 
 
    if (m != 1) {
        for (j = 0; j < n; j++) {
            for (i = 0; i < m - 1; i++) {
                if (i == m - 2) {
                    flag = temp;
                }
                temp = temp->next;
            } 
            printf("%d ", temp->data);
            p = temp;
            flag->next = temp->next;
    	    temp = temp->next;
    	    free(p);
        }
    } else {
        for (i = 1; i <= n; i++) {
            printf("%d ", temp->data);
            temp = temp->next; 
        }
        Destroy(head);  //¿¿¿¿ 
    }     
    return;
}

void Destroy(Node *head) 
{
	Node *p, *pre;
	if (head == NULL) {
	    return;
	}
	pre = head->next;
	if (pre == head) {  //¿¿¿¿¿¿ 
	    free(head);
	} else {
	    p = pre->next;
	    while (p != head) {
		free(pre);
		pre = p;
		p = p->next; 
	    } 
	    free(pre);
	    free(head);
	}			
}
