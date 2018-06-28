#include <stdio.h>

int main(int argc, char *argv[]) {
	struct Persoana {
		char *nume;
		int varsta;
	};
	typedef struct Persoana Fiinta;
	Fiinta persoana[20];
	int i;
	persoana[0].varsta = 20;
	persoana[0].nume = "Gigel";
	persoana[1].varsta = 15;
	persoana[1].nume = "Andrei";
	for (i= 0; i<2; i++) {
		printf("%d\n", persoana[i].varsta);
		puts(persoana[i].nume);	
	}
	return 0;
}