#include<stdio.h>


void NineToNine(int i, int j) {
	printf("첫 단과 마지막 단을 입력하세요.\n");
	scanf("%d %d", &i, &j);
	if (i > j) {
		for (; j <= i; j++) {
			for (int num = 1; num <= 9; num++) {
				printf("%d×%d=%d\n", j, num, j*num);
			}
		}
	}
	else if (j > i) {
		for (; i <= j; i++) {
			for (int num = 1; num <= 9; num++) {
				printf("%d×%d=%d\n", i, num, i*num);
			}
		}
	}
	else {
		for (int num = 1; num <= 9; num++) {
			printf("%d×%d=%d\n", i, num, i*num);
		}
	}
	
}


int main(void) {
	int i = 0, j = 0;
	NineToNine(i,j);
	return 0;
}