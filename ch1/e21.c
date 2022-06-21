#include <stdio.h>

#define TWIDTH 2

int main(int argc, char* argv[])
{
	int c, nblanks = 0;

	while ((c = getchar()) != EOF) {
		if (c == ' ')
			++nblanks;
		else {
			if (c != '\t') {
				int ntabs = nblanks / TWIDTH;
				int nspaces = nblanks % TWIDTH;

				for (int i = 0; i < ntabs; ++i)
					putchar('\t');
				for (int i = 0; i < nspaces; ++i)
					putchar(' ');

				nblanks = 0;
				putchar(c);
			} else
				putchar(c);
		}
	}
}

int get_line(char line[], int lim)
{
	int c, i;

	for (i = 0; i < lim - 1 && (c=getchar()) != EOF && c != '\n'; ++i)
		line[i] = c;
	
	if (c == '\n') {
		line[i] = c;
		++i;
	}

	line[i] = '\0';
	return i;
}
