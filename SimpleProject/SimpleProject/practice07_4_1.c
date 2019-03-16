#include<stdio.h>

int main(void) {
	int num = 0,num2=0, i, sum = 0;
	printf("두 개의 정수를 입력하세요.\n");
	scanf_s("%d %d", &num, &num2);
	for (; num <=num2; num++ ) {
		sum += num;
	}
	printf("합계:%d", sum);
	return 0;
}