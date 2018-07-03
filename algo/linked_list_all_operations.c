#include <stdio.h>
#include <stdlib.h>
 
typedef struct Node {
	int data;
	struct Node *next;
} Node;

void deleteValue(Node **head_ref, int key) {
	Node* temp = *head_ref, *prev;
	if (temp != NULL && temp->data == key) {
		*head_ref = temp->next;
		free(temp);
		return;
	}

	while (temp != NULL && temp->data != key) {
		prev = temp;
		temp = temp->next;
	}
 
	if (temp == NULL)
		return;
	prev->next = temp->next;
	free(temp);
}
 
void push(Node** head_ref, int new_data) {
		Node* new_node = (Node*)malloc(sizeof(Node));
		new_node->data = new_data;
		new_node->next = (*head_ref);
		*head_ref = new_node;
}

void insertAfter(Node* prev_node, int new_data) {
		if (prev_node == NULL)
			return;

		Node* new_node = (Node*)malloc(sizeof(Node));
		new_node->data = new_data;
		new_node->next = prev_node->next;
		prev_node->next = new_node;
}
 
void append(Node** head_ref, int new_data) {
		Node* new_node = (Node*)malloc(sizeof(Node));
		Node *last = *head_ref;
		new_node->data = new_data;
		new_node->next = NULL;
		if (*head_ref == NULL) {
			*head_ref = new_node;
			return;
		}
		while (last->next != NULL)
			last = last->next;
		last->next = new_node;
}
 
void printList(Node *node) {
	while (node != NULL) {
		 printf(" %d ", node->data);
		 node = node->next;
	}
}
 
int main() {
	Node* head = NULL;
	append(&head, 6);
	push(&head, 7);
	push(&head, 1);
	append(&head, 4);
	insertAfter(head->next, 8);
	printf("\n Lista creata: ");
	printList(head);
	deleteValue(&head, 1);
	printf("\n Lista dupa stergere: ");
	printList(head);
	return 0;
}