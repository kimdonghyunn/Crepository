#include<stdio.h>

int main(void) {
	int i = 0, j = 0;
	printf("정수를 입력하세요.\n");
	scanf("%d", &i);
	while (j < i) {
		printf("Hello world!%d\n", j);
		j++;
	}
	return 0;
}