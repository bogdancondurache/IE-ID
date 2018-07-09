/*
Data o matrice si coordonate x, y; sa se determine o metoda de a iesi din matrice, stiind ca se poate
face deplasare pe Nord, Sud, Est, Vest si doar in campurile cu valoare mai mica decat cea curenta
*/
#include <stdio.h>

const int N = 4;
 
int bk(int x, int y, int movei, int m[N][N], int sol[2][10],
				int last[], int xMove[], int yMove[]);

unsigned short isSafe(int x, int y, int m[N][N], int last[], int value) {
	return ( x >= 0 && x < N && y >= 0 &&
			 y < N && m[x][y] <= value && (last[0] != x || last[1] != y));
}

void printSolution(int m[N][N], int sol[2][10]) {
	int i = 0;
	while (sol[0][i] > -1 && sol[1][i] > 0) {
		printf("m[%d][%d] = %d\n", sol[0][i], sol[1][i], m[sol[0][i]][sol[1][i]]);
		i++;
	}
}
 
unsigned short solve() {
	int m[4][4] = { 
		 1,  3,  5,  7,
		14,  8,  6,  9,
		11,  4,  2,  0,
		12,  1,  13, 10,
	};
	int sol[2][10];
	for (int i = 0; i < 2; i++)
		for (int j = 0; j < 10; j++)
			sol[i][j] = -1;
	sol[0][0] = 1;
	sol[1][0] = 1;
	int xMove[4] = { 1, -1, 0, 0 };
	int yMove[4] = { 0, 0, 1, -1 };
	int last[2] = { 1, 1 };

	if (bk(1, 1, 1, m, sol, last, xMove, yMove) == 0) {
		printf("Nu exista solutie");
		return 1;
	}
	else
		printSolution(m, sol);
 
	return 1;
}
 
int bk(int x, int y, int movei, int m[N][N], int sol[2][10],
				int last[], int xMove[], int yMove[]) {
	
	if (x == 0 || y == 0 || x == N-1 || y == N-1)
		return 1;

	int i, next_x, next_y;
	for (i = 0; i < 4; i++) {
		next_x = x + xMove[i];
		next_y = y + yMove[i];
		if (isSafe(next_x, next_y, m, last, m[x][y])) {
			last[0] = x;
			last[1] = y;
		 	if (bk(next_x, next_y, movei+1, m, sol, last, xMove, yMove) == 1) {
				sol[0][movei] = next_x;
				sol[1][movei] = next_y;
				return 1;
			}
		}
	}

   return 0;
}

int main()
{
	solve();
	return 0;
}