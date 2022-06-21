#include <stdio.h>

#define MAXLINE 1024

int get_line(char line[], int lim);

int main(int argc, char* argv[])
{
	int len;
	char line[MAXLINE];
	while ((len = get_line(line, MAXLINE)) > 0 ) {
		if (len > 80)
			printf("%s", line);
	}
}

int get_line(char line[], int lim)  {
	int i;
	for (i = 0; i < lim - 1 && (line[i] = getchar()) != EOF && line[i] != '\n'; ++i)
		;

	if (line[i] == '\n')
		line[++i] = '\0';
			
	return i;	
}
