#include <stdio.h>

int main(int argc, char* argv[]) {
	int c;
	while ((c = getchar()) != EOF) {
		 if (c == ' ' || c == '\t')
			 putchar('\n');
		 else
			 putchar(c);
	}
}
