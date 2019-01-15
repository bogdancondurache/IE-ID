#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	int nr1, nr2, suma;
	FILE *f, *g;
	f = fopen("input.txt", "r");
	fscanf(f, "%d %d", &nr1, &nr2);
	fclose(f);
	suma = nr1 + nr2;
	g = fopen("output.txt", "w");
	fprintf(g, "%d", suma);
	fclose(g);
	return 0;
}
