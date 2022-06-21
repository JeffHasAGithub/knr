#include <stdio.h>

#define NCHARS 95
#define OFFSET 32

int main(int argc, char* argv[]) {
	int chars[NCHARS] = {0};

	int c;
	while ((c = getchar()) != EOF) {
		int pos = c - OFFSET;
		if (pos < 0 || pos > NCHARS)
			continue;

		chars[pos]++;
	}

	for (int i = 0; i < NCHARS; i++) {
		printf("Char %c: ", i + OFFSET);
		for (int j = 0; j < chars[i]; j++) {
			putchar('#');
		}
		putchar('\n');
	}
}
