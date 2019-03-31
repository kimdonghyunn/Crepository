#include<stdio.h>
// 포인터 배열의 예
int main(void) {
	int num1 = 10, num2 = 20, num3 = 30;
	int * arr[3] = { &num1,&num2,&num3 };
	int i = 0;
	for(i=0;i<3;i++){
		printf("%d \n", *arr[i]);
	}
	return 0;
}