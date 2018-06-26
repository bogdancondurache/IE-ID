/*
Se citeşte un număr întreg n. Să se verifice dacă numărul este divizibil cu diferenţa dintre cifra maximă şi cea minimă.
*/

#include <stdio.h>

int main() {
	int n, c, n2;
	int cMax = 0, cMin = 9; // cifra maxima si minima
	scanf("%d", &n);
	n2 = n;
	while (n > 0) {
		c = n % 10; // 1234 / 10 = 123 R 4
		if (c > cMax) {
			cMax = c;
		}
		if (c < cMin) {
			cMin = c;
		}
		n = n / 10; // n /= 10
	}
	if (n2 % (cMax - cMin) == 0) {
		printf("divizibil");
	}
	else {
		printf("nu e divizibil");
	}
	return 0;
}