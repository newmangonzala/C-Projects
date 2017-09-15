#include <stdio.h>
#include <stdlib.h>

#define SIZE 5
#define TIME 100

int inputData (int [][SIZE][SIZE]);
/*  inputs the data, returns the number of items read in */
void printDataAtTime (int [][SIZE][SIZE], int t);
/*  outputs the SIZE x SIZE table at time t  */
void printSampleData (int [][SIZE][SIZE]);
// prints the SIZE x SIZE table at time 0 and the TIME-1
int normalize(int[][SIZE][SIZE]);
// normalizes the data and returns the shift amount


int main (void) {
	int data[TIME][SIZE][SIZE];
	
	printf("count = %d\n", inputData(data));
	
	printf("\nSample of data: \n");
	printSampleData(data);
	
	printf("\nshift = %d\n", normalize(data));
	
	printf("\nSample of data after shift:\n");
	printSampleData(data);
	
	return 0;
}

int inputData (int x[][SIZE][SIZE]) {
	int i, j, k, min, itemCount = 0;
	for (i = 0; i < TIME; ++i) {
		for (j = 0; j < SIZE; ++j) {
			for (k = 0; k < SIZE; ++k) {
				scanf("%d", &x[i][j][k]);
				++itemCount;
			}
		}
	}
	return itemCount;
}

void printSampleData (int x[][SIZE][SIZE]) {
	printDataAtTime(x, 0);
	printDataAtTime(x, TIME-1);
	return;
}
int normalize(int x[][SIZE][SIZE]) {
	int shift = 0, i, j, k;
	for (i = 0; i < TIME; ++i) {
		for (j = 0; j < SIZE; ++j) {
			for (k = 0; k < SIZE; ++k) {
				if (x[i][j][k] < shift)
					shift = x[i][j][k];
			}
		}
	}
	if (shift < 0)
		shift = shift * -1;
	
	for (i = 0; i < TIME; ++i) {
		for (j = 0; j < SIZE; ++j) {
			for (k = 0; k < SIZE; ++k) {
				x[i][j][k] += shift;
			}
		}
	}
	return shift;
}

void printDataAtTime (int x[][SIZE][SIZE], int t) {
	int i, j, k;
	for (j = 0; j < SIZE; ++j) {
		for (k = 0; k < SIZE; ++k) {
			printf("%3d ", x[t][j][k]);
		}
		printf("\n");
	}
	printf("\n");
	return;
}


