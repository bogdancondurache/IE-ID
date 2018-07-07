#include <stdio.h>
#include <stdlib.h>
	
struct node {
	int key;
	struct node *left, *right;
};

struct node* new_node(int item) {
	struct node *temp = (struct node *)malloc(sizeof(struct node));
	temp->key = item;
	temp->left = temp->right = NULL;
	return temp;
}

struct node* search(struct node* root, int key) {
	if (root == NULL || root->key == key)
	   return root;

	if (root->key < key)
	   return search(root->right, key);

	return search(root->left, key);
}

void inorder(struct node *root) {
	if (root != NULL) {
		inorder(root->left);
		printf("%d \n", root->key);
		inorder(root->right);
	}
}
	
struct node* insert(struct node* node, int key) {
	if (node == NULL) 
		return new_node(key);
	 
	if (key < node->key)
		node->left = insert(node->left, key);
	else if (key > node->key)
		node->right = insert(node->right, key);   
	 
	return node;
}
	
int main() {
/*
			    5					5, 3, 2, 4, 7, 6, 8
			 /     \
			3       7
   		   /  \    /  \
	      2    4  6    8 
*/
	struct node *root = NULL;
	root = insert(root, 5);
	insert(root, 3);
	insert(root, 2);
	insert(root, 4);
	insert(root, 7);
	insert(root, 6);
	insert(root, 8);

	inorder(root);

	return 0;
}