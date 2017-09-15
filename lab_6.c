#include <stdio.h>

int main (void) {
	int i, j, less = 0, greater = 0;
	int integer = 1;
	double sum = 0, average = 0;
	int intArray [100000];
	for (i = 0; integer > 0; ++i) {
		scanf("%d", &integer);
		if (integer <= 0) {
			break;
		}
		intArray[i] = integer;
		sum = sum + integer;
	}
	printf("count = %d\n", i);
	printf("average = %.3lf\n", sum / i);
	
	for (j = 0; j < i; ++j) {
		if (intArray[j] < sum/i) {
			++less;
		}
		if (intArray[j] > sum/i) {
			++greater;
		}
	}
	printf("number less than average: %d\n", less);
	printf("number greater than average: %d", greater);
	
	return 0;
}