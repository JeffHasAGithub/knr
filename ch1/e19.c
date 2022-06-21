#include <stdio.h>

#define MAXLINE 1024

int get_line(char line[], int max);
void reverse(char line[], int len);

int main(int argc, char *argv[]) {
	int len;
	char line[MAXLINE];

	while ((len = get_line(line, MAXLINE)) > 0) {
		reverse(line, len);
		printf("%s", line);
	}
}

int get_line(char s[], int lim)
{
	int c, i;

	for (i = 0; i < lim - 1 && (c=getchar()) != EOF && c != '\n'; ++i)
		s[i] = c;
	
	if (c == '\n') {
		s[i] = c;
		++i;
	}

	s[i] = '\0';
	return i;
}

void reverse(char line[], int len) {
	int i = len;

	for (int i = 0; i <= len - 1 - i; ++i) {
		int temp = line[i];
		line[i] = line[len - 1 - i];
		line[len - 1 - i] = temp;
	}
}
