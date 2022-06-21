#include <stdio.h>

#define TWIDTH 2

int main(int argc, char* argv[]) {
	int c, nblanks = 0;
	
	while ((c = getchar()) != EOF) {
		if (c == '\t') {
			for (int i = 0; i < TWIDTH - (nblanks % TWIDTH); ++i)
				putchar(' ');
			nblanks = 0;
			continue;
		}

		if (c == ' ')
			++nblanks;

		putchar(c);
	}
}
