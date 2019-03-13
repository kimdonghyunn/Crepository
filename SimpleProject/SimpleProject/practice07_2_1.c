#include<stdio.h>

int main(void) {
	int i = 0, j = 0, sum = 0;
	while (i<5) {
		j = 0;
		while (j<=0) {
			printf("정수를 입력하세요. 0이하의 숫자를 입력하면 다시 입력해야합니다.\n");
			scanf("%d", &j);
		}
		sum += j;
		i++;
	}
	printf("%d", sum);
}