#include<stdio.h>
//문자열을 매개변수로 받아서 화문인지 화문이 아닌지 판단하여 결과를 출력하는 함수구현
void palindrome(char *arr) {
	int i=0,len=0,temp=0;
	for (i = 0; arr[i] != '\0'; i++) {
		len++;
	}

	for (i = 0; i < len/2; i++) {
		if (arr[i] == arr[len - i-1]) {
			if (i == len / 2 - 1) {
				printf("화문입니다.");
			}
			continue;
		}
		else{
			printf("화문이 아닙니다.");
			break;
		}
	}
}
int main(void) {
	char arr[10];
	printf("문자열 입력:");
	scanf("%s", arr);
	palindrome(arr);
	return 0;
}