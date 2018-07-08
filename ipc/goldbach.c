/*
Să se verifice, până la un număr dat n, conjectura lui Goldbach. Aceasta afirmă că orice număr par se poate scrie ca sumă de două numere prime. Pentru toate numerele mai mici decât n, să se afişeze o descompunere în sumă de două numere prime.
*/
#include <stdio.h>

unsigned short prim(int n) {
	for (int i = 2; i <= n/2; i++) {
		if (n%i == 0)
			return 0;
	}
	return 1;
}

int main(int argc, char *argv[]) {
	int n = 15, i;
	int prime[n], k = 0;;
	for (i = 2; i < n; i++) {
		if (prim(i))
			prime[k++] = i;
	}
	while (--n) {
		if (n%2==0) {
			int found = 0;
			for (i = 0; i < k-1 && found == 0; i++) 
				for (int j = i; j < k; j++)
					if (prime[i] + prime[j] == n) {
						printf("%d = %d + %d\n", n, prime[i], prime[j]);
						found = 1;
					}
		}
	}
}