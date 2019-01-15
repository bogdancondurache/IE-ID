#include <stdio.h>

int main(int argc, char *argv[]) {
	int a[20][20];
	int m, i, j;
	scanf("%d", &m);
	for (i = 0; i < m; i++) {
		for (j = 0; j < m; j++) {
			printf("introduceti un numar: ");
			scanf("%d", &a[i][j]);
		}
	}
	
	for (i = 0; i < m; i++) {
			for (j = 0; j < m; j++) {
					printf(" %d ", a[i][j]);
			}
			printf("\n");
	}
	
	printf("Diagonala principala: ");
	// a[0][0] ; a[1][1]; a[2][2]
	for (i = 0; i < m; i++)
		printf("%d ", a[i][i]);
		
	printf("Diagonala secundara: ");
	// a[2][0]; a[1][1]; a[0][2]
	for (i = 0; i < m; i++)
			printf("%d ", a[m-i-1][i]);
	return 0;
}