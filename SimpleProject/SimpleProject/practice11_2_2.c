#include<stdio.h>

int main(void) {
	char temp ;
	char voca[50];
	int i = 0, len = 0;
	printf("영단어를 입력하세요.\n");
	scanf("%s", voca);
	for (i = 0; voca[i] != '\0'; i++) {
		len++;
	}
	for (i = 0; i < len / 2; i++) {
		temp = voca[i];
		voca[i] = voca[(len - i)-1];
		voca[(len - i) - 1] = temp;
	}
	printf("%s", voca);
	return 0;
}