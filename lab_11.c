#include <stdio.h>
#include <stdbool.h>

#define N 10


bool search(int a[], int n, int key, int *count);

int main(void) {
	int i, key,count=0;
	int *number;
	int list[N] = {2,4,6,8,2,2,0,31,-6,0};
	bool isItTrue = false;
	
	printf("Enter key to search for: "); scanf("%d", &key);
	 
	
	// printf("%d\n", count);
	// number = &count;
	// *number = 3;
	// printf("%d", count);
	
	isItTrue = (search(list,N,key,&count));
	// if(isItTrue) printf("hello world");
	// printf(" %d",*(&count));
	if (isItTrue)
		printf("key is found %d time(s)\n", *(&count));
	else
		printf("key is not found\n");
	
	// printf(search(list,N,key,&count)?"key is found %d time(s)\n":
									 // "key is not found\n", *(&count));
	return 0;
}

bool search(int a[], int n, int key, int *count) {

	int *i, number;
	number = 0;
	for (i = a; i < a + n; *i++) {
	
		if (*i == key) {
			number++;
		}
	}
	// printf("(%d)\n", number);
	*count = number;
	// printf(" %d\n", *count);
	if (number)
		return 1;
	else
		return 0;
}