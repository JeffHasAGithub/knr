#include <stdio.h>

int main(int argc, char* argv[]) {
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	celsius = lower;

	printf("fahr\tcelsius\n");
	printf("----\t-------\n");
	while (celsius <= upper) {
		fahr = celsius * (1.8) + 32;
		printf("%4.0f\t%6.1f\n", celsius, fahr);
		celsius = celsius + step;
	}
}
