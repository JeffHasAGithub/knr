#include <stdio.h>

int main(int argc, char* argv[]) {
	int last, c;

	last = EOF;
	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\t' || c == '\n') {
			if (last != ' ' && last != '\t' && last != '\n')
				putchar(c);
		} else {
			putchar(c);
		}
		
		last = c;
	}
}
