#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

#define PLUS	'+'
#define MINUS '-'
#define ZERO	'0'

int getint(int *pn);

int main(int argc, char* argv[]) {
	int n;
	getint(&n);
	printf("%d\n", n);
}

int getint(int *pn) {
	int c, sign;
	*pn = 0;

	while (isspace(c = getc(stdin)))
			;

	if (!isdigit(c) && c != EOF && c != PLUS  && c != MINUS) {
		ungetc(c, stdin);
		return 0;
	}

	sign = (c == '-') ? -1 : 1;
	if (c == PLUS || c == MINUS) {
		c = getc(stdin);
		if (!isdigit(c)) {
			ungetc(c, stdin);
			return 0;
		}
	}

	for (; isdigit(c); c = getc(stdin))
		*pn = 10 * *pn + (c - ZERO);

	*pn *= sign;
	if (c != EOF)
		ungetc(c, stdin);

	return c;
}
