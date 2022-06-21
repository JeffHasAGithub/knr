#include <stdio.h>

#define MAXLINE 1024

void appendEscape(char *s, int i, char c);
void escape(char *s, char *t);
void unescape(char *s, char *t);

int main(int argc, char* argv[]) {

	char s1[MAXLINE] = "Hello\t\nHi";
	char s2[MAXLINE];
	char s3[MAXLINE];

	escape(s2, s1);
	unescape(s3, s2);

	printf("%s\n", s2);
	printf("%s\n", s3);
}

void unescape(char *s, char *t) {
	int i, j;
	for (i = j = 0; i < MAXLINE - 1 && t[i] != '\0'; i++, j++) {
		switch (t[i]) {
			case '\\':
				if (t[i + 1] == 't') {
					s[j] = '\t';
					++i;
				} else if (t[i + 1] == 'n') {
					s[j] = '\n';
					++i;
				}
				break;
			default:
				s[j] = t[i];
				break;
		}
	}
	s[j] = '\0';
}

void escape(char *s, char *t) {
	int i, j;
	for (i = j = 0; j < MAXLINE - 1 && t[i] != '\0'; i++, j++) {
		switch (t[i]) {
			case '\t':
				s[j++] = '\\';
				s[j] = 't';
				break;
			case '\n':
				s[j++] = '\\';
				s[j] = 'n';
				break;
			default:
				s[j] = t[i];
		}
	}	
	s[j] = '\0';
}
