#include <stdio.h>

int main(int argc, char* argv[]) {
	int nspaces, ntabs, nlines;
	nspaces = ntabs = nlines = 0;

	int c;
	while ((c = getchar()) != EOF) {
		if (c == ' ')
			++nspaces;
		else if (c == '\t')
			++ntabs;
		else if (c == '\n')
			++nlines;
	}

	printf("nspaces=%d\nntabs=%d\nnlines=%d\n", nspaces, ntabs, nlines);
}
