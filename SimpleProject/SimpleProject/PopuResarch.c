#include<stdio.h>

int main(void) {
	int villa[4][2];
	int sum = 0, i = 0, j = 0;
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 2; j++) {
			printf("%d층 %d호의 거주자수:", i + 1, j + 1);
			scanf("%d", &villa[i][j]);
		}
	}
	for (i = 0; i < 4; i++) {
		sum = 0;
		sum += villa[i][0];
		sum += villa[i][1];
		printf("%d층의 거주자수:%d\n", i+1, sum);
	}
	return 0;
}