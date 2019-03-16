#include<stdio.h>

int main(void) {
	int i = 0, j = 0;
	printf("뺄셈을 할 정수를 두개 입력하세요. 큰 값에서 작은 값이 빼집니다.\n");
	scanf_s("%d %d", &i, &j);
	if (i < j) 
		printf("%d-%d=%d\n", j, i, j - i);
	
	else
		printf("%d-%d=%d\n", i, j, i-j);
	return 0;
}