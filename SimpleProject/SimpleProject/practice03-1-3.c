#include<stdio.h>

int main(void) {
	int i = 0;
	printf("제곱할 숫자를 입력하시오.\n");
	scanf_s("%d", &i);
	printf("%d의 제곱은 %d", i, i*i);
	return 0;
}