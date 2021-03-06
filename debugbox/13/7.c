#include <stdio.h>
#include <stdlib.h>
typedef struct node {
    int data;
    struct node *next;
} Node;

Node *circle_create(int n);
void count_off(Node *head, int n, int k, int m);
void Destroy(Node * head);

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
    Node *p = head;
    Node *q;
    if (p != NULL) {
    	while (p->data != k) {   //�k真真 
            p=p->next;
        }
        if (m != 1) {
            while (p != p->next) {
        	int j = 1;
                while (j < m-1) {
                    p = p->next;
            	    j++;
		}
                q = p->next;
                printf("%d ", q->data);
                p->next = q->next;
                free(q);
                q = NULL;
                p = p->next;	          
            }
            printf("%d", p->data);
            free(p);
	} else {
	    int j;
	    for (j = 0; j < n; j++) {
		printf("%d ", p->data );
		p = p->next ;
	    }
	    Destroy(head);
	}    
    }
    return 0;
}

void Destroy(Node *head) 
{
	Node *p, *pre;
	if (head == NULL) {
	    return;
	}
	pre = head->next;
	if (pre == head) {  //真真真 
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
