#include <stdio.h>

int parent(int i) {
	return (i-1)/2;
}

int lchild(int i) {
	return 2*i+1;
}

int rchild(int i) {
	return 2*i+2;
}

int insert(int value) {
	// inseram pe ultima pozitie
	h[size++] = value;
	// verificam proprietatea de min heap
	int i = size - 1;
	while (i != 0 && h[parent(i)] > h[i]) {
		int temp;
		// interschimbam h[parent(i)] cu h[i]
		temp = h[i];
		h[i] = h[parent(i)];
		h[parent(i)] = temp;
		// continuam pentru parent(i)
		i = parent(i);
	}
}