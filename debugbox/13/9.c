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
    Node *temp, *pre, *p;
    int i;
    int times;
    temp = head;
    pre = head;
    
    for (i = 1; i < k; i++) {
        pre = temp;
        temp = temp->next;
    }    
    if (k == 1 && m == 1) {
	for (i = 0; i < n; i++) {
	    printf("%d ", temp->data);
	    p = temp;
	    temp = temp->next;
	    free(p); 
	}
    } else {
	i = 1;
	times = 1;
	while (times <= n) {
            if (i == m) {
            	printf("%d", temp->data);
        	times++;
        	p = temp;
        	pre->next = p->next;
        	temp = pre;
        	free(p);
        	i = 0;
        	if (times != n + 1) {
            	    printf(" ");
         	}
            }
            pre = temp;
            temp = temp->next;
            i++;
    	}
    } 
    
    return 0;
}
