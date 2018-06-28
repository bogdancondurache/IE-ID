/*
Se consideră un fişier C care conţine textul sursă al unui 
program C. Să se genereze un alt fişier, care să elimine din
textul sursă comentariile. Atenţie la tratarea simbolurilor
corespunzătoare începutului şi sfârşitului de comentariu.
Numele fişierului de intrare (codul sursă cu comentarii),
respectiv numele fişierului sursă de ieşire se citesc din 
linia de comandă a programului, ca argumente ale funcţiei main.
*/

#include <stdio.h>

int main(int argc, char *argv[]) {
	FILE *f, *g;
	char ch, nextch;
	short flag = 0; // 0 - outside comment; 1 - line comment; 2 - multiline comment
	if (argc < 2) {
		printf("Trebuie 2 parametrii");
		return 0;
	}
	f = fopen(argv[1], "r");
	g = fopen(argv[2], "w");
	if (f == NULL || g == NULL)
		printf("Problema cu deschiderea fisierelor");
	while (!feof(f)) {
		nextch = 0;
		ch = fgetc(f);
		if (ch == '\n')
			flag = 0;
		if (ch == '/') {
			nextch = fgetc(f);
			switch (nextch) {
				case '/':
					flag = 1;
				case '*':
					flag = 2;
			}
		}
		if (flag == 0) {
			fputc(ch, g);
			if (nextch)
				fputc(nextch, g);
		}
		if (ch == '*' && flag == 2) {
			nextch = fgetc(f);
			if (nextch == '/')
				flag = 0;
		}
	} 
	fclose(f);
	fclose(g);
	return 0;
}