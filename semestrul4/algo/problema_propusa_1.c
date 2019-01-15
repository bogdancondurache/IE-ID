/*
Folosind Divide et Impera, să se calculeze de câte ori apare o valoare
dată într-un şir de n numere întregi.
*/
#include <stdio.h>

int aparitii(int a[], int nr, int l, int r) {
	if (r >= l) {
		int mid = l + (r - l)/2;
		if (r == l)
			return a[r] == nr;
		return aparitii(a, nr, l, mid) + aparitii(a, nr, mid+1, r);
	}
	return 0;
}

int main(int argc, char *argv[]) {
	int a[] = {1, 3, 5, 1, 7, 1, 9, 1, 11, 7, 1, 9, 0, 1};
	int nr = 1;
	int result = aparitii(a, nr, 0, (sizeof(a) / sizeof(int)) -1);
	printf("%d", result);
	return 0;
}