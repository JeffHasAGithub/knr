#include <stdio.h>

#define MAXLINE 1024

int genchars(char* s, int spos, int min, int max);
void expand(const char* s1, char* s2);

int main(int argc, char* argv[]) {
	const char* s1 = "-aaaa-z0-99999-";
	char s2[MAXLINE];

	expand(s1, s2);
	printf("%s\n", s1);
	printf("%s\n", s2);
}



void expand(const char* s1, char* s2) {
	int i, j;
	int lastc = '\0';
	for (i = j = 0; j < MAXLINE; i++, j++) {
		if (s1[i] == '\0')
			break;

		if (s1[i] == '-') {
			if (lastc != '\0') {
				char nextc = s1[++i];
				if (nextc != '\0')
					j = genchars(s2, j, lastc + 1, nextc);
				else {
					s2[j] = '-';
					break;
				}
			}
		}
		s2[j] = s1[i];
		lastc = s1[i];	
	}
}

int genchars(char* s, int spos, int min, int max) {
	int i;
	for (i = 0; i < max - min; i++) {
		s[spos + i] = min + i; 
	}	
	return i + spos;
}
