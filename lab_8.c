#include <stdio.h>
#include <stdlib.h>

int inputData(int []);
int largest(int [], int);
int smallest(int[], int);
double average(int [], int);
int numEven(int [], int);
int numOdd(int [],int);

int main (void) {
	int list[10000] = {0}, size = 0, i;
	printf("total = %d\n", size = inputData(list));
	printf("last one: %d\n", list[size-1]);
	printf("largest = %d\n", largest(list, size));
	printf("smallest = %d\n", smallest(list, size));
	printf("average = %.3lf\n", average(list,size));
	printf("number even = %d\n", numEven(list, size));
	printf("number odd = %d\n", numOdd(list, size));
	return 0;
}
int inputData (int list[]) {
	int j = 0, i, k, temp;
	int numNumbers = 0;
	while (1) {
		scanf("%d", &temp);
		if (temp < 0)
			break;
		list[numNumbers] = temp;
		++numNumbers;
	}
	return numNumbers;
}
int largest (int list[], int x) {
	int max = 0, i;
	for (i = 0; i < 10000; ++i) {
		if (list[i] > max)
			max = list[i];
	}
	return max;
}
int smallest (int list[], int x) {
	int min = list[0], i;
	for (i = 0; i < x; ++i) {
		if (list[i] < min && list[i] > 0)
			min = list[i];
	}
	return min;
}
double average(int list[], int x) {
	double sum = 0.0;
	int i;
	for (i = 0; i < x; ++i) {
		sum = sum + list[i];
	}
	return sum / x;
}
int numEven(int list[], int x) {
	int i = 0;
	int y = 0;
	for (i = 0; i < x; ++i) {
		if (list[i] % 2 == 0)
			++y;
	}
	return y;
}
int numOdd(int list[], int x) {
	int i = 0;
	int y = 0;
	for (i = 0; i < x; ++i) {
		if (list[i] % 2 != 0)
			++y;
	}
	return y;
}

