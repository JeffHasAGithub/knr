#include <stdio.h>
#include <stdlib.h>

int strend(char *s, char *t);

int main(int argc, char* argv[]) {
	char s1[] = "Hello Goodbye";
	char s2[] = "Hello Goodbye";

	printf("%d\n", strend(s1, s2));
}

int strend(char *s, char *t) {
	while (*s != '\0') {
		if (*s == *t) {
			char *sp = s++;
			char *tp = t++;
			while (*tp != '\0' && *sp++ == *tp)
				tp++;

			if (*sp == '\0' && *tp == '\0')
				return 1;
		} else
			s++;
	}

	return 0;
}
