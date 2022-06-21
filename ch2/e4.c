#include <stdio.h>

#define MAX 1024

void squeeze(char* s1, const char *s2);

int main(int argc, char *argv[])
{
	char line[MAX];
	char* excl = "Ho";

	int i, c;
	for (i = 0; (c = getchar()) != '\0' && c != '\n' && i < MAX; ++i)
		line[i] = c;	

	squeeze(line, excl);
	printf("%s\n", line);
}

void squeeze(char* s1, const char *s2)
{
	int c1, c2;
	int current = 0;
	for (int i = 0; (c1 = s1[i]) != '\0'; ++i) {
		for (int j = 0; (c2 = s2[j]) != '\0'; ++j) {
			if (c1 == c2) {
				break;
			}
		}
		if (c1 != c2) {
			s1[current++] = s1[i];
		}
	}
	s1[current] = '\0';
}
