#include<stdio.h>

int main(void) {
	int arr[6] = { 1,2,3,4,5,6 };
	int * fptr = &arr[0];
	int * bptr = &arr[5];
	int i = 0,temp=0;
	for (i = 0; i < 3; i++) {
		temp = *fptr;
		*fptr = *bptr;
		*bptr = temp;
		fptr+=1;
		bptr -= 1;
	}
	/*for (i = 0; i < 3; i++) {
		temp = *(fptr+i);
		*(fptr + i) = *(bptr+(6 - i));
		*(bptr + (6 - i)) = temp;
	}s
	*/
	for (i = 0; i < 6; i++) {
		printf("%d ", arr[i]);
	}
}