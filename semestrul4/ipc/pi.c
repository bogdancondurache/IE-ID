/*
Să se scrie un program care calculează valoarea aproximativa a numărului PI, ştiind că acesta este determinat de seria 
*/
#include <stdio.h>
#include <math.h>

const int precizie = 1000000;

int main(int argc, char *argv[]) {
	double pi;
	int i, j;
	double sum = 0;
	for (i=1; i <= precizie; i++) {
		double e = 1.0/(2*i-1);
		// e *= pow(-1, i+1);
		if (i%2 == 0) e *= -1;
		sum += e;
	}
	pi = 4 * sum;
	printf("%lf", pi);
}