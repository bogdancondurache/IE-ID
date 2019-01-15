#include <stdio.h>

typedef struct Persoana {
	char *nume;
	int varsta;
} Persoana;

void increment_varsta(Persoana* p) {
	p->varsta++;
}

int main(int argc, char *argv[]) {
	Persoana persoana, *spre_pers = &persoana;
	int i;
	persoana.varsta = 20;
	persoana.nume = "Gigel";
	increment_varsta(spre_pers);
	printf("%d\n", spre_pers->varsta); // spre_pers -> varsta == (*spre_pers).varsta
	puts(spre_pers->nume);	
	return 0;
}