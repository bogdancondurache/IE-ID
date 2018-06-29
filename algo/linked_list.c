#include <stdio.h>
#include <stdlib.h>
 
struct Node 
{
	int data;
	struct Node *next;
};

void printList(struct Node *n)
{
	while (n != NULL)
	{
		 printf(" %d ", n->data);
		 n = n->next;
	}
}
 
// Linked list cu 3 noduri
int main()
{
	struct Node* n = NULL;
	struct Node* n2 = NULL;
	struct Node* n3 = NULL;
	
	n = (struct Node*)malloc(sizeof(struct Node)); 
	n2 = (struct Node*)malloc(sizeof(struct Node));
	n3 = (struct Node*)malloc(sizeof(struct Node));

	n->data = 1;
	n->next = n2;

	n2->data = 2;
	n2->next = n3;

	n3->data = 3;
	n3->next = NULL;
	
	printList(n);

	return 0;
}