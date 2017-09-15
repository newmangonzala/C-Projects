#include <stdio.h>

double solvePoly2 (double x, double y[]);

int main (void) {
	int i;
	double value, array[6];
	printf("Enter a value of x that a 5th degree polynomial will be solved at: ");
	scanf("%lf", &value);
	printf("Enter the coefficients (x0 to x5): ");
	for (i = 0; i < 6; ++i) {
		scanf("%lf", &array[i]);
	}
	printf("%lf\n", solvePoly2(value, array));
	return 0;
}

double solvePoly2 (double x, double y[]) {
	return (y[5] * (x*x*x*x*x)) + (y[4] * (x*x*x*x)) + (y[3] * (x*x*x)) + (y[2] * (x*x)) + (y[1] * x) + y[0];
}