#include <stdio.h>

int bitcount(unsigned x);

int main(int argc, char* argv[]) {
	printf("%d\n", bitcount(5));
}

int bitcount(unsigned x) {
	int n = 0;
	while (x != 0) {
		x &= x - 1;
		n++;
	}
	return n;
}
