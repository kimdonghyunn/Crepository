#include<stdio.h>

int main(void) {
	int i = 0, j = 9;
	printf("정수를 하나 입력하세요.\n");
	scanf_s("%d", &i);
	while (j>0) {
		printf("%d×%d=%d\n", i, j, i*j);
		j--;
	}
	return 0;
}