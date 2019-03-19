#include<stdio.h>

int fibo(int num) {
	int n1=0,n2=1,i,n3 ;
	if (num == 1) {
		printf("%d", n1);
	}
	else if (num == 2) {
		printf("%d %d", n1, n2);
	}
	else
		printf("%d %d", n1, n2);
	for (i = 1; i < num-1;i++) {
		n3 = n1 + n2;
		printf(" %d",n3);
		n1 = n2;
		n2 = n3;
	}
}

int main(void) {
	int num = 0;
	printf("나열할 피보나치 수열의 값을 입력하세요.\n");
	scanf_s("%d", &num);
	fibo(num);
	return 0;
}