#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

#define PLUS	'+'
#define MINUS '-'
#define ZERO	'0'

int getfloat(double *pf);

int main(int argc, char* argv[]) {
	double f;
	getfloat(&f);
	printf("%f\n", f);
}

int getfloat(double *pf) {
	int c, sign;
	double val, pow;
	*pf = 0.0;

	while (isspace(c = getc(stdin)))
		;

	if (!isdigit(c) && c != EOF && c != PLUS && c != MINUS) {
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
		val = 10.0 * val + (c - ZERO);

	if (c == '.')
		c = getc(stdin);

	for (pow = 1.0; isdigit(c); c = getc(stdin)) {
		val = 10.0 * val + (c - ZERO);
		pow *= 10.0;
	}

	if (c != EOF)
		ungetc(c, stdin);

	*pf = sign * val / pow;
	return c;
}
