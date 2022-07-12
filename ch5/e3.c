#include <stdio.h>
#include <stdlib.h>

void strcat1(char *s, char *t);

int main(int argc, char* argv[]) {
	char s1[BUFSIZ] = "Hello";
	char *s2 = "Goodbye";

	strcat1(s1, s2);
	printf("%s\n", s1);
}

void strcat1(char *s, char *t) {
	while (*s != '\0')
		s++;
	while ((*s++ = *t++) != '\0')
		;
}
