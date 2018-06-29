/*
Folosind pointeri să se scrie o funcție C care primind ca
și parametru 2 siruri de caractere, le concatenează cu obținerea
noului sir in primul argument al funcției (implementare pentru funcția strcat –cu pointeri!).

Folosind pointeri să se scrie o funcţie C care returnează
lungimea unui şir de caractere (funcţia strlen –cu pointeri!).
*/

#include <stdio.h>
#include <stdlib.h>

unsigned sstrlen(char *a) {
	unsigned c = 1;
	while(a[c] != '\0') {
		c++;
	}
	return c;
}

void sstrcat(char *a, char *b) {
	/* Implementare cu iteratori si un for
	unsigned la, lb, i;
	la = sstrlen(a);
	lb = sstrlen(b);

	for (i = 0; i < lb; i++)
		a[la + i] = b[i];
	*/
	// Implementare folosind doar pointeri
	while (*a)
		a++;
	while (*b) {
		*a++ = *b++;
	}
}

int main(int argc, char *argv[]) {
	char str[80] = "string";
	char *str2 = "nou";
	unsigned len;
	len = sstrlen(str);
	puts(str);
	printf("are %d caractere\n", len);
	sstrcat(str, str2);
	puts(str);
	return 0;
}