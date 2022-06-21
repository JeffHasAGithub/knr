#include <stdio.h>

#define MAXD 10

int main(int argc, char* argv[]) {
	int wordlens[MAXD] = {0};
	int rest = 0;

	int c, nlen = 0;
	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\t' || c == '\n') {
			if (nlen >= MAXD)
				++rest;	
			else
				++wordlens[nlen];

			nlen = 0;
		} else {
			++nlen;
		}
	}
	
	for (int i = 1; i < MAXD; ++i) {
		printf("Length %d: ", i);
		for (int j = 0; j < wordlens[i]; ++j)
			putchar('#');
		putchar('\n');
	}

	printf("Length %d+: ", MAXD);
	for (int j = 0; j < wordlens[j]; ++j)
		putchar('#');
	putchar('\n');
}
