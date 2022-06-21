#include <stdio.h>

unsigned invert(unsigned x, int p, int n);

int main(int argc, char *argv[]) {
	printf("%d\n", invert(170, 4, 3));
}

unsigned invert(unsigned x, int p, int n) {
	unsigned mask = ((1 << n) - 1);
	return (mask << (p + 1 - n)) ^ x;
}
