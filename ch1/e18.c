#include <stdio.h>

#define MAXLINE 1024

int get_line(char line[], int max);

int main(int argc, char *argv[]) {
	int len;
	char line[MAXLINE];

	while ((len = get_line(line, MAXLINE)) > 0) {
		if (len == 1)
			continue;

		int i;
		int start = 0;
		int last = len - 1;
		for (i = 0; i < len; ++i) {
			if (line[i] == ' ' || line[i] == '\t')	
				continue;
			else {
				start = i;
				break;
			}
		}

		for (i = len - 1; i > start; --i) {
			if (line[i] == ' ' || line[i] == '\t' || line[i] == '\n')
				continue;
			else {
				last = i;
				break;
			}
		}

		for (i = start; i <= last; ++i) {
			putchar(line[i]);
		}
		putchar('\n');
	}
}

int get_line(char line[], int max) {
	int i = 0;
	for (; i < max - 1 && (line[i] = getchar()) != EOF && line[i] != '\n'; ++i)
		;

	if (line[i] == '\n')
		line[++i] = '\0';

	return i;
}
