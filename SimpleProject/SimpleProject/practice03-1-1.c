#include<stdio.h>

int main(void) {
	int i=0, j=0;
	printf("정수를 두개 입력하세요.");
	scanf_s("%d %d", &i, &j);
	printf("두 수 %d와 %d의 뺄셈:%d\n두 수 %d와 %d의 곱셈:%d\n",i,j,i - j,i,j,i*j);
	return 0;
}