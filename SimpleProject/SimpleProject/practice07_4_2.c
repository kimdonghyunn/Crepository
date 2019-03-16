#include<stdio.h>

int main(void) {
	int num = 0, i, sum = 1;
	printf("계승을 위한 정수를 입력하세요.\n");
	scanf_s("%d", &num);
	for (i = 1; i < num+1; i++) {
		sum *= i;
	}
	printf("합계:%d", sum);
	return 0;
}