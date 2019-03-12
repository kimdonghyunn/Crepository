#include<stdio.h>

int main(void) {
	int i = 0;
	printf("ASCII값으로 바꿀 정수를 입력하세요.\n");
	scanf_s("%d", &i);
	printf("정수%d를 ASCII로 바꾸면 %c입니다.", i, i);
	return 0;
}