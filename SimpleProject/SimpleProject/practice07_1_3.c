#include<stdio.h>

int main(void) {
	int i=1,sum = 0;
	while (i != 0) {
		printf("정수를 입력하세요.\n");
		scanf_s("%d", &i);
		printf("더한 값:%d\n", sum += i);
	}
	return 0;
}
