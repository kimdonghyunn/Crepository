#include<stdio.h>

void GCD(int i, int j) {
	printf("두 개의 정수 입력:\n");
	scanf("%d %d", &i, &j);
	if (i > j) {
		for (int num = i; num < 0; num--) {
			if (i%num == 0 && j%num == 0) {
				printf("두 수의 최대 공약수:%d", num);
				break;
			}
		}
	}
	if (j > i) {
		for (int num = j; num > 0; num--) {
			if (i%num == 0 && j%num == 0) {
				printf("두 수의 최대 공약수:%d", num);
				break;
			}
		}
	}
	else{
		for (int num = j; num > 0; num--) {
			if (i%num == 0 && j%num == 0) {
				printf("두 수의 최대 공약수:%d", num);
				break;
			}
		}
	}
}

int main(void) {
	int i = 0, j = 0;
	GCD(i, j);
	return 0;
}