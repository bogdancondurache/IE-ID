/* Se citesc doua multimi de numere si se face cate o lista simplu inlantuita pentru fiecare
si o lista simplu inlantuita pentru reuniunea multimilor
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
	int data;
	struct Node *next;
} Node;

void printList(struct Node *n) {
	while (n != NULL) {
		printf(" %d ", n->data);
		n = n->next;
	}
}

void add(Node** head, int data) {
	Node *temp = (Node*)malloc(sizeof(Node));
	temp->data = data;
	temp->next = NULL;
	if (*head == NULL)
		*head = temp;
	else {
		(*head)->next = temp;
		(*head) = (*head)->next;
	}
}

/* Returneaza nodul din lista de pe pozitia data */
Node* get(Node* list, int position) {
	while (position--)
		list = list->next;
	return list;
}

/* returneaza 1 daca `value` e in lista, 0 daca nu */
short exist(Node* list, int value) {
	while (list != NULL) {
		if (list->data == value)
			return 1;
		list = list->next;
	}
	return 0;
}

int main(int argc, char *argv[]) {
	int m, n, i, val;
	Node *head, *head2, *head3;
	Node *list_one, *list_two, *list_three;
	head = NULL;
	head2 = NULL;
	head3 = NULL;
	list_one = (Node*)malloc(sizeof(Node));
	list_two = (Node*)malloc(sizeof(Node));
	list_three = (Node*)malloc(sizeof(Node));
	scanf("%d", &m);
	scanf("%d", &n);
	for (i = 0; i < m; i++) {
		scanf("%d", &val);
		add(&head, val);
		if (i == 0) {
			list_one = head;
		}
	}
	for (i = 0; i < n; i++) {
		scanf("%d", &val);
		add(&head2, val);
		if (i == 0) {
			list_two = head2;
		}
	}
	for (i = 0; i < m; i++) {
		Node* temp = get(list_one, i);
		add(&head3, temp->data);
		if (i == 0) {
			list_three = head3;
		}
	}
	for (i = 0; i < n; i++) {
		Node* temp = get(list_two, i);
		if (!exist(list_one, temp->data))
			add(&head3, temp->data);
	}

	printf("\n Lista 1: ");
	printList(list_one);
	printf("\n Lista 2: ");
	printList(list_two);
	printf("\n Lista 3: ");
	printList(list_three);
}