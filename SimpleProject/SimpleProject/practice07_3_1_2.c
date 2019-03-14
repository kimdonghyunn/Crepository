#include<stdio.h>

int main(void) {
	int i = 0, sum = 0;
	printf("while문에 사용할 정수를 하나 입력하세요.\n");
	scanf("%d", &i);
	while (i != 0) {
		printf("정수를 입력하세요(0 to quit)\n");
		scanf("%d", &i);
		sum += i;
	}
	printf("합계:%d", sum);
	return 0;
}