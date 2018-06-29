/* Se citesc doua multimi de numere si se face cate o lista simplu inlantuita pentru fiecare
si o lista simplu inlantuita pentru reuniunea multimiilor
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
	int data;
	struct Node *next;
} Node;

void printList(struct Node *n) {
	while (n != NULL)
	{
		 printf(" %d ", n->data);
		 n = n->next;
	}
}

void add(Node** head, int data) {
	Node *temp = (Node*)malloc(sizeof(Node));
	temp->data = data;
	temp->next = NULL;
	if (*head == NULL) {
		*head = temp;
	}
	else {
		(*head)->next = temp;
		(*head) = (*head)->next;
	}
}

int main(int argc, char *argv[]) {
	Node *head, *first;
	head = NULL;
	first = (Node*)malloc(sizeof(Node));
	int n, i, val;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &val);
		add(&head, val);
		if (i == 0) {
			first = head;
		}
	}
	printList(first);
}