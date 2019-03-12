#include<stdio.h>

int main(void) {
	char i=0;
	printf("정수로 변환할 알파벳을 입력해주세요.\n");
	scanf("%c", &i);
	printf("알파벳%c를 정수로 변환하면 %d입니다.",i, i);
	return 0;
}