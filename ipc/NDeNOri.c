/*
Se citeşte un număr întreg n. Să se genereze şirul 1, 2, 2, 3, 3, 3, 4, 4, 4, 4, … n, n, … n unde n apare de n ori.
*/

#include <stdio.h>

int main() {
	int n, i, j;
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= i; j++)
			printf("%d", i);
	}
	return 0;
}