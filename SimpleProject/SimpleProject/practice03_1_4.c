#include<stdio.h>

int main(void) {
	int i = 0, j = 0;
	printf("두 정수를 입력하세요.\n");
	scanf_s("%d %d",&i,&j);
	printf("%d를 %d로 나누면 \n몫:%d\n나머지:%d", i, j, i / j, i%j);
	return 0;
}