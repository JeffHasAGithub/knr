#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

int htoi(const char* hex, int len);
int power(int n, int base, int exp);

int main(int argc, char* argv[]) {
	printf("%d\n", htoi("OXff", 4));
}

int htoi(const char* hex, int len) {
	int c, st = 0;

	if (len > 2)
		if (toupper(hex[0]) == 'O' && toupper(hex[1]) == 'X')
			st = 2;

	int sum, exp;
	sum = exp = 0;
	for (int i = len - 1; i >= st; --i) {
		if (!isxdigit(c = hex[i]))
			return -1;

		if (isdigit((c)))
			c -= '0';
		else
			c = toupper(c) - 55;
		sum += power(c, 16, exp++);
	}

	return sum;
}

int power(int n, int base, int exp) {
	int res = 0;
	int mult = 1;

	for (int j = 0; j < exp; ++j)
		mult *= base; 

	return n * mult;
}
