#include<stdio.h>

int main(void) {
	int i = 0;
	int arr[5] = { 1,2,3,4,5 };
	int * ptr = arr;
	for (i = 0; i < 5; i++) {
		*(ptr+i) += 2;
	}
	printf("%d %d %d %d %d\n", *ptr, *(ptr + 1), *(ptr + 2), *(ptr + 3), *(ptr + 4));
	printf("%d %d %d %d %d\n", ptr[0], ptr[1], ptr[2], ptr[3], ptr[4]);
	printf("%d %d %d %d %d\n", *(arr), *(arr+1),*(arr+2),*(arr+3),*(arr+4));
	printf("%d %d %d %d %d\n", arr[0], arr[1], arr[2], arr[3], arr[4]);
	return 0;
}