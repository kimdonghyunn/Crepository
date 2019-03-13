#include<stdio.h>

int main(void) {
	int i = 0, j = 0, k = 0, sum = 0;
	double avg = 0;
	printf("몇개의 정수를 입력 받겠습니까?\n");
	scanf_s("%d", &i);
	while (j<i) {
		printf("정수를 입력하세요.\n");
		scanf_s("%d", &k);
		sum += k;
		j++;
	}
	avg = sum / i;
	printf("%f\n", avg);
	return 0;
}