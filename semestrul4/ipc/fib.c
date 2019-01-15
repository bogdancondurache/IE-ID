//Se citeşte un număr natural n. Să se genereze elementele şirului lui Fibonacci mai mici decât n, fără a folosi un şir.


#include <stdio.h>

int fib(int x) {
	if (x <= 1) {
		return 1;
	}
	else {
		return fib(x-1) + fib(x-2);
	}
}

int main() {
	int n, i;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		printf("%d ", fib(i));
	return 0;
}