#include<stdio.h>

int main(void) {
	int i =1, sum = 0;
	while (i != 0) {
		printf("정수 입력(0 to quit)\n");
		scanf("%d", &i);
		sum += i;
	}
	printf("합계:%d", sum);
	return 0;
}