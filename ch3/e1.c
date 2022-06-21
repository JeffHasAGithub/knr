#include <stdio.h>

int binsearch1(int x, int v[], int n);

int main(int argc, char* argv[])
{
	int nums[] = {1, 2, 3, 4, 5};
	printf("%d found at position: %d\n", 2, binsearch1(2, nums, 5));
}

int binsearch1(int x, int v[], int n)
{
	int low, high, mid;

	low = 0;
	high = n - 1;
	while (low <= high) {
		mid = (low + high) / 2;
		if (x < v[mid])
			high = mid - 1;
		else
			low = mid + 1;
	}

	if (x == v[mid])
		return mid;
	
	return -1;
}
