#include<stdio.h>

int main(void) {
	int arrayy[5];
	int i, max, min,sum=0;
	for (i = 0; i < 5; i++) {
		printf("%d번째 정수를입력하세요.\n", i + 1);
		scanf("%d", &arrayy[i]);
	}
	for (i = 0; i < 4; i++) {
		if (arrayy[0] > arrayy[i + 1]) {
			max = arrayy[0];
		}
		else {
			max = arrayy[i + 1];
		}
	}
	printf("최대값:%d\n", max);
	for (i = 0; i < 4; i++) {
		if (arrayy[0] > arrayy[i + 1]) {
			min = arrayy[i + 1];
		}
		else {
			min = arrayy[0];
		}
	}
	printf("최소값:%d\n", min);
	for (i = 0; i < 5; i++) {
		sum += arrayy[i];
	}
	printf("입력된 정수의 총합:%d\n", sum);
	return 0;
}