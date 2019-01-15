//Se citeşte un număr natural n. Să se genereze şirul primelor n numere prime.

#include <stdio.h>

int prim(int nr) {
	int i;
	for (i = 2; i < nr/2; i++) {
		if (nr % i == 0) {
			return 0;
		}
	}
	return 1;
}

int main() {
	int n, i, contor = 0;
	int sir[20];
	scanf("%d", &n);
	
	for (i = 2; contor < n; i++) {
		if (prim(i) == 1) {
			sir[contor] = i; // contor = 0; sir[0] = i; contor = 1
			contor++;
		}	
	}
	
	for (i = 0; i < n; i++) {
		printf("%d ", sir[i]);
	}
	return 0;
}