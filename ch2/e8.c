#include <stdio.h>

unsigned rightrot(unsigned x, int n);

int main(int argc, char *argv[]) {
	printf("%u\n", rightrot(3, 1));
}

unsigned getbits(unsigned x, int p, int n) {
	return x >> (p + 1 - n) & ~(~0 << n);
}

unsigned rightrot(unsigned x, int n) {
	for (; n > 0; --n) {
		if (x & 1)
			x = x >> 1 | ~(~0u >> 1);
		else
			x >>= 1;
	}

	return x;
}
