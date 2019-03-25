#include<stdio.h>

int Factorial(int n) {
	if (n == 0) {
		return 1;
	}
	else
		return 2 * Factorial(n - 1);
}
int main(void) {
	int n = 0;
	printf("정수입력:");
	scanf("%d", &n);
	printf("2의 %d승은 %d", n, Factorial(n));
}