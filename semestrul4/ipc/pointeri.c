#include <stdio.h>

//void increment(int array) {
//	int i;
//	for (i = 0; i < 3; i++) {
//		array[i]++;
//	}
//}

int main() {
	int i;
	char a[] = "Nostradamus";
	char *b = a;
	b = a+5;
	puts(b);
	return 0;
}