#include<stdio.h>

int main(void) {
	int i = 0;
	printf("양수의 음수 또는 음수에서 양수로 바꿀 숫자를 입력하세요.\n");
	scanf_s("%d", &i);
	printf("%d을 반전하면 %d입니다.\n", i, ~i + 1);
	return 0;
}