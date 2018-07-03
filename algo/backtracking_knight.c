#include <stdio.h>

const int N = 8;
 
int bk(int x, int y, int movei, int sol[N][N],
				int xMove[],  int yMove[]);
 
/* Functie ce verifica daca coordonatele x si y sunt in interiorul tablei NxN */
unsigned short isSafe(int x, int y, int sol[N][N])
{
	return ( x >= 0 && x < N && y >= 0 &&
			 y < N && sol[x][y] == -1);
}
 
/* Functie ce printeaza o matrice de N x N */
void printSolution(int sol[N][N])
{
	for (int x = 0; x < N; x++)
	{
		for (int y = 0; y < N; y++)
			printf(" %2d ", sol[x][y]);
		printf("\n");
	}
}
 
/* Functia rezolva problema calului utilizand backtracking.
   Returneaza 0 daca nu e niciun drum posibil, 1 daca exista si il printeaza
   Pot fi mai multe solutii, metoda printeaza si iese la prima  */
unsigned short solve()
{
	int sol[N][N];
 
	/* Matricea de solutii */
	for (int x = 0; x < N; x++)
		for (int y = 0; y < N; y++)
			sol[x][y] = -1;
 
	// Se definesc mutarile posibile ale calului 
	int xMove[8] = {  2, 1, -1, -2, -2, -1,  1,  2 };
	int yMove[8] = {  1, 2,  2,  1, -1, -2, -2, -1 };
 
	// Pozitia initiala e x = 0, y = 0
	sol[0][0] = 0;
 
	// Porneste de la pozitia initiala si testeaza toate posibilitatile cu functia bk
	if (bk(0, 0, 1, sol, xMove, yMove) == 0)
	{
		printf("Nu exista solutie");
		return 1;
	}
	else
		printSolution(sol);
 
	return 1;
}
 
/* Functie pentru a testa recursiv posibilitatile */
int bk(int x, int y, int movei, int sol[N][N],
				int xMove[N], int yMove[N])
{
   int i, next_x, next_y;
   if (movei == N*N)
	   return 1;
 
   /* incearca toate mutarile din coordonatele curente */
   for (i = 0; i < 8; i++)
   {
	   next_x = x + xMove[i];
	   next_y = y + yMove[i];
	   if (isSafe(next_x, next_y, sol))
	   {
		 sol[next_x][next_y] = movei;
		 if (bk(next_x, next_y, movei+1, sol,
						 xMove, yMove) == 1)
			 return 1;
		 else
			 sol[next_x][next_y] = -1; // backtracking
	   }
   }
 
   return 0;
}

int main()
{
	solve();
	return 0;
}