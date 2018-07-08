/*
Sa se converteasca un numar din baza 2 in baza 16
*/
#include <stdio.h>
#include <math.h> 

const char table[] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};

int main(int argc, char *argv[]) {
	int arr[] = { 1, 0, 0, 1, 1, 0, 1 };
	int *p = arr;
	int k = 0, i;
	int nr = sizeof(arr) / sizeof(int);
	int temp[4];
	for (i = 0; i < nr; i++) {
		k += (int)(pow(2, nr-i-1) * arr[i]);
	}
	i = 0;
	while (k > 0) {
		temp[i++] = k%16;
		k /= 16;
	}
	while (i--) {
		printf("%c", table[temp[i]]);
	}
	return 0;
}