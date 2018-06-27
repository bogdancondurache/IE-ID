/*
Se citeste o propozitie de la tastatura..sa se numere cate
litere mari si cate litere mici sunt in prop
*/

#include <stdio.h>
#include <string.h>

int main() {
	char s[20];
	gets(s);
	int len = strlen(s);
	int i, nrMici = 0, nrMari = 0;
	for (i = 0; i < len; i++) {
		if ('A' <= s[i] && s[i] <= 'Z')
			nrMari++;
		if ('a' <= s[i] && s[i] <= 'z')
			nrMici++;
	}
	printf("Litere mici: %d \n", nrMici);
	printf("Litere mari: %d", nrMari);
	return 0;
}