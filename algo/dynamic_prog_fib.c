#include <stdio.h>

int f[50];

int fib(int n) {
	int i;
	if (f[n] == -1)
		f[n] = fib(n-1) + fib(n-2);
	return f[n];
}
 
int main ()
{
	int n = 6, i;
	for (i = 0; i < 50; i++)
		f[i] = -1;
	f[0] = 0;
	f[1] = 1;
	printf("%d", fib(n));
	return 0;
}