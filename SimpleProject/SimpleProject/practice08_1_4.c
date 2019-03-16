#include<stdio.h>

int main(void) {
	int i = 0, j = 0;
	printf("뺄셈을 할 정수를 두 개 입력하세요.큰수에서 작은수가 빼집니다.\n");
	scanf_s("%d %d", &i, &j);
	 i > j ? printf("%d-%d=%d\n", i, j, i - j) : printf("%d-%d=%d\n", j, i, j - i);
	return 0;
}