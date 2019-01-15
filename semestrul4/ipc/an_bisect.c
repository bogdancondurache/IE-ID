/*
Să se scrie un program care determină dacă un an este bisect sau nu. Anii bisecţi sunt divizibili cu 4, excepţie făcând cei care sunt divizibili cu 100, care trebuie să fie divizbili şi cu 400.
*/

#include <stdio.h>

int main() {
	int an;
	scanf("%d", &an);
	if (an % 4 == 0) {
		if (an % 100 == 0 && an % 400 == 0) {
			printf("bisect");
		}
		else if (an % 100 != 0) {
			printf("bisect");
		}
		else {
			printf("nu e bisect");
		}
	}
	else {
		printf("nu e bisect");
	}
	return 0;
}