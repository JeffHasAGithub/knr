#include <stdio.h>
#include <string.h>

void reverse(char s[]);
void itob(int n, char s[], int b);

int main(int argc, char* argv[]) {
	char s[1024];
	itob(-45, s, 5);

	printf("%s\n", s);
}

void itob(int n, char s[], int b) {
	int sign, i;

	if ((sign = n) < 0)
		n = -n;

	i = 0;
	do {
		int dg = n % b;
		if (dg > 9)
			s[i++] = dg + 55;
		else
			s[i++] = dg + '0';
	} while ((n /= b) > 0);

	if (sign < 0)
		s[i++] = '-';

	s[i] = '\0';
	reverse(s);
}

void reverse(char s[]) {
	int c, i, j;

	for (i = 0, j = strlen(s) - 1; i < j; i++, j--) {
		c = s[i];
		s[i] = s[j];
		s[j] = c;
	}
}
