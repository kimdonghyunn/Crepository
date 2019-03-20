#include<stdio.h>

int TenToSixteen(int num) {
	printf("16진수로 바꿀 10진수를 입력하세요.");
	scanf("%d", &num);
	printf("10진수 %d를 16진수로 바꾸면 %x입니다.", num, num);
	return num;
}

int main(void) {
	int num = 0;
	TenToSixteen(num);
	return 0;
}