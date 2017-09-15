#include <stdio.h>

#define SIZE_l1 (sizeof(l1)/sizeof(l1[0]))
#define SIZE_l2 (sizeof(l2)/sizeof(l2[0]))

void swap(int* x, int* y);
void printList(int [], int );
int swapSlice( int [], int c, int [], int d, int, int);


int main(void) {
  int l1[] = {20,21,22,23,24,25,26,27,28,29,30,31};
  int l2[] = {-4,-2,0,2,4,6,8,10};
  int start, end;

  printf("start index? "); scanf("%d",&start);
  printf("end index? "); scanf("%d",&end);
  
  if (swapSlice(l1,SIZE_l1,l2,SIZE_l2,start,end) == 0)
    printf("error\n");
  else {
    printf("lists after swapping slice from %d to %d:\n",start,end);
    printList(l1,SIZE_l1); printf("\n");
    printList(l2,SIZE_l2); printf("\n");
    swap(&start,&end);
    printf("after swap: start = %d, end = %d\n",start,end);
  }

  return 0;
}

void printList(int r[], int b) {
	int i;
	for (i = 0; i < b; ++i) {
		printf("%d ", r[i]);
	}
}

int swapSlice( int l1[], int c, int l2[], int d, int x, int y) {
	int temp[c];
	int i;
	if (y > c || x > c || y > d || x > d || x > y || x < 0 || y < 0)
		return 0;
	else {
		
	for (i = 0; i <= c; ++i) {
		temp[i] = l1[i];
	}
	for (i = x ; i <= y; ++i) {
		l1[i] = l2[i];
		l2[i] = temp[i];
	}
	return 1;
	}
}

void swap(int* x, int* y) {
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}