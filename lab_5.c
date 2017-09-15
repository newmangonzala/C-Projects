#include <stdio.h>


int main(void) {
	int n, i;
	
	printf("Enter in a positive integer: ");
	scanf("%d", &n);
	while (n < 0) {
		printf("Error: integer must be positive, enter one: ");
		scanf("%d", &n);
	}
	for (i = 2; i < n; ++i) {
		if (n % i ==0) {
			break;
		}
	}
	if (i < n)
		printf("%d is not prime.", n);
	else
		printf("%d is prime.", n);
	return 0;
}
