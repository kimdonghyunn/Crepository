#include<stdio.h>

int main(void) {
	int n;
	printf("양의 정수를 하나입력하세요.\n");
	scanf_s("%d", &n);

	switch (n/10){
	case 0:
		printf("0이상 10미만");
		break;
	case 1:
		printf("10이상 20미만");
		break;
	case 2:
		printf("20이상 30미만");
		break;
	default:
		printf("30이상");
}
		return 0;
}