#include <stdio.h>

unsigned getbits(unsigned x, int p, int n);
unsigned setbits(unsigned x, int p, int n, unsigned y);

int main(int argc, char* argv[]) {
	printf("%d\n", setbits(100, 4, 3, 255));
}

unsigned getbits(unsigned x, int p, int n) {
	return x >> (p + 1 - n) & ~(~0 << n);
}

unsigned setbits(unsigned x, int p, int n, unsigned y) {
	unsigned yshift = getbits(y, n, n) << (p + 1 - n);
	unsigned mask = (~(((1 << n) - 1) << (p + 1 - n))) & x;
	
	return mask | yshift;
}
