#include<stdio.h>
//배열을 정렬하기 
int main(void) {
	int arr[] = { 9,4,3,2,6,8,10,1,7,5 };
	int len = sizeof(arr) / sizeof(int), i = 0,j=0,temp=0;
	
	for (i = 0; i < len; i++) {
		for(j=0;j<len;j++){
			if (arr[j] > arr[i]) {
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	for (i = 0; i < len; i++) {
		printf("%d ", arr[i]);
	}
	return 0;
}