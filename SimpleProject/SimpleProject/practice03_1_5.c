#include<stdio.h>

int main(void) {
	int i = 0, j = 0, k = 0;
	printf("정수를 세개 입력하세요.\n");
	scanf_s("%d %d %d", &i, &j, &k);
	printf("(%d-%d)×(%d+%d)×(%d%%%d)=%d", i, j, j, k, k, i, (i - j)*(j + k)*(k%i));
	return 0;
}