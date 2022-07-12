#include <stdio.h>
#include <stdlib.h>

void strncpy1(char *s, char *t, int n);
void strncat1(char *s, char *t, int n);
int	 strncmp1(char *s, char *t, int n);

int main(int argc, char* argv[]) {
	char s1[BUFSIZ];
	char s2[] = "Hello";
	strncpy1(s1, s2, 12);
	printf("%s\n", s1);

	char s3[BUFSIZ] = "Hello";
	char s4[] = "Goodbye";
	strncat1(s3, s4, 8);
	printf("%s\n", s3);

	char s5[] = "HelloJ";
	char s6[] = "HelloH";
	printf("%d\n", strncmp1(s5, s6, 24));
}

void strncpy1(char *s, char *t, int n) {
	int i = 0;
	while (i < n && t[i] != '\0') {
		s[i] = t[i];
		i++;
	}

	s[i] = '\0';
}

void strncat1(char *s, char *t, int n) {
	while (*s != '\0')
		s++;

	int i = 0;
	while (i < n && t[i] != '\0') {
		s[i] = t[i];
		i++;
	}

	s[i] = '\0';
}

int strncmp1(char *s, char *t, int n) {
	int i = 0;
	while (i < n && s[i] == t[i])
		i++;

	return s[i] - t[i];
}
