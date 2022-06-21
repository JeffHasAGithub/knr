#include <stdio.h>

#include <limits.h>

int main(int argc, char* argv[]) {

	printf("Signed char:\tmin = %d, max = %d\n", CHAR_MIN, CHAR_MAX);
	printf("Unsigned char:\tmin = %d, max = %d\n", 0, UCHAR_MAX);	

	printf("Signed short:\tmin = %d, max = %d\n", SHRT_MIN, SHRT_MAX);
	printf("Unsigned short:\tmin = %d, max = %d\n", 0, USHRT_MAX);

	printf("Signed int:\tmin = %d, max = %d\n", INT_MIN, INT_MAX);
	printf("Unsigned int:\tmin = %d, max = %u\n", 0, UINT_MAX);

	printf("Signed long:\tmin = %ld, max = %ld\n", LONG_MIN, LONG_MAX);
	printf("Unsigned long:\tmin = %ld, max = %lu\n", 0, ULONG_MAX);
}
