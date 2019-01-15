/*
Se citesc de la tastatură listele de adiacenţă ale 
unui graf neorientat. Să se afişeze matricea de adiacenţă.
*/
#include <stdio.h>

int main(int argc, char *argv[]) {
	// nr_noduri
	// repetat: nod, nr_elemente_lista, lista[]
	int i, j, n;
	scanf("%d", &n);
	int m[n+1][n+1];
	for (i=0; i<=n; i++)
		for (j=0; j<=n; j++)
		m[i][j] = 0;
	for (i=0; i<n; i++) {
		int nod, k;
		scanf("%d", &nod);
		scanf("%d", &k);
		for (j=0; j<k; j++) {
			int el;
			scanf("%d", &el);
			m[nod][el] = 1;
		}
	}
	for (i=0; i<n; i++) {
		for (j=0; j<n; j++)
			printf(" %2d ", m[i+1][j+1]);
		printf("\n");
	}
	return 0;
}