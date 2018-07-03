#include <stdio.h>
#include <stdlib.h>
 
typedef struct Node {
	int data;
	struct Node* next;
	struct Node* prev;
} Node;

void deleteNode(Node **head_ref, Node *del) {
	if(*head_ref == NULL || del == NULL)
		return;
 
	if(*head_ref == del)
		*head_ref = del->next;
 
	if(del->next != NULL)
		del->next->prev = del->prev;
 
	if(del->prev != NULL)
		del->prev->next = del->next;     
 
	free(del);
	return;
}     
 
void push(Node** head_ref, int new_data) {
		Node* new_node = (Node*)malloc(sizeof(Node));
		new_node->data = new_data;
		new_node->next = (*head_ref);
		new_node->prev = NULL;
		if ((*head_ref) != NULL)
				(*head_ref)->prev = new_node;
		(*head_ref) = new_node;
}
 
void insertAfter(Node* prev_node, int new_data) {
		if (prev_node == NULL) {
				return;
		}
		Node* new_node = (Node*)malloc(sizeof(Node));
		new_node->data = new_data;
		new_node->next = prev_node->next;
		prev_node->next = new_node;
		new_node->prev = prev_node;
		if (new_node->next != NULL)
				new_node->next->prev = new_node;
}
 
void append(struct Node** head_ref, int new_data) {
		Node* new_node = (Node*)malloc(sizeof(Node));
		Node* last = *head_ref;
		new_node->data = new_data;
		new_node->next = NULL;
		if (*head_ref == NULL) {
				new_node->prev = NULL;
				*head_ref = new_node;
				return;
		}
		while (last->next != NULL)
				last = last->next;
		last->next = new_node;
		new_node->prev = last; // !important - asigura dubla inlantuire
		return;
}
 
void printList(Node* node) {
		Node* last;
		printf("\nIn ordine: \n");
		while (node != NULL) {
				printf(" %d ", node->data);
				last = node;
				node = node->next;
		}
 
		printf("\nIn ordine inversa: \n");
		while (last != NULL) {
				printf(" %d ", last->data);
				last = last->prev;
		}
}

int main() {
		Node* head = NULL; 
		append(&head, 6);
		push(&head, 7);
		push(&head, 1);
		append(&head, 4);
		insertAfter(head->next, 8);
		printf("Dupa creare: ");
		printList(head);

		deleteNode(&head, head);
		deleteNode(&head, head->next);
		deleteNode(&head, head->next);
		// 7 4
		printf("\n\nDupa stergere: ");
		printList(head);

		return 0;
}