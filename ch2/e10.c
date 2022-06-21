#include <ctype.h>
#include <stdio.h>
#include <string.h>

#define UPPER_MIN 65
#define UPPER_MAX 90

int lower(int c);

int main(int argc, char* argv[]) {
	printf("%c\n", lower('T'));
}

int lower(int c) {
	return (c >= UPPER_MIN && c <= UPPER_MAX) ? c + 32 : c;	
}
