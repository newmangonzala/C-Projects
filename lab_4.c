#include <stdio.h>
#include <math.h>

int main (void) {
	float e = 0;      // declaration of constant e
	int n, i, j = 1; //n = max factorial, i and j are increments
	float h = 1.0;
	printf("Enter an integer greater than 2: ");
	scanf("%d", &n);
	for (i = 0; i <= n; ++i) {
			h = 1.0;
		for (j = i; j >= 1; --j){
		
			h = h * j;
			//printf("%d\n", h);
			
		}
		e = (1 / h) + e;
		//printf("%f\n", e);
	}
	printf("e = %f\n", e);
	printf("e from math.h = %f", M_E);

return 0;
}