#include <stdio.h>

enum zile{luni, marti=5, miercuri, joi=10, vineri, sambata, duminica}; // 0, 5, 6, 10, 11, 12, 13
int main(int argc, char *argv[]) {
	enum zile zi;
	zi = vineri;
	printf("%d", zi);
	return 0;
}