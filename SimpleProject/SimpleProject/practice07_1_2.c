#include<stdio.h>

int main(void) {
	int i = 0, j = 1;
	printf("정수를 입력하세요.\n");
	scanf_s("%d", &i);
	while (j < i+1) {
		printf(" %d ", 3 * j);
		j++;
	}
	return 0;
}