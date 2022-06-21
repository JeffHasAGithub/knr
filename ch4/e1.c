#include <stdio.h>
#include <string.h>

#define MAXLINE 1000

int get_line(char line[], int max);
int strindex(char source[], char searchfor[]);

char pattern[] = "ould";

int main(int argc, char *argv[]) {
	char line[MAXLINE];
	int found = 0;

	int index = -1;
	while (get_line(line, MAXLINE) > 0)
		if ((index = strindex(line, pattern)) >= 0) {
			printf("%d ", index);
			printf("%s", line);
			found++;
		}

	return found;
}

int get_line(char line[], int lim) {
	int c, i = 0;
	while (--lim > 0 && (c = getchar()) != EOF && c != '\n')
		line[i++] = c;

	if (c == '\n')
		line[i++] = c;

	line[i] = '\0';

	return i;
}

int strindex(char source[], char searchfor[]) {
	int c, i, j, k;
	int recent = -1;

	for (i = 0; (c = source[i]) != '\0'; i++) {
		for (j = i, k=0; searchfor[k] != '\0' && searchfor[k] == source[j]; j++, k++)
			;		
		
		if (k > 0 && searchfor[k] == '\0')
			recent = i;
	}

	return recent;
}
