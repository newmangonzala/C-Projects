#include <stdio.h>

double solvePoly (double x);

int main (void) {
	double value;
	printf("Enter a value of x: ");
	scanf("%lf", &value);
	printf("%lf\n", solvePoly(value));
	return 0;
}

double solvePoly (double x) {
	return (3 * (x*x*x*x*x)) + (2 * (x*x*x*x)) - (5 * (x*x*x)) - (x*x) + (7 * x) - 6;
}