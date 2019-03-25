#include<stdio.h>

void ek(void) {
	int n = 0,k = 0,sum=0;
	printf("상수 n 입력: ");
	scanf("%d", &n);
	for ( k = 0,sum=2;sum<=n; k++){
		sum *= 2;
	}
	printf("공식을 만족하는 k의 최대값은 %d", k);
}

int main(void) {
	ek();
	return 0;
}