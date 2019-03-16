#include<stdio.h>

int main(void) {
	double i = 0, j = 0;
	printf("두개의 실수를 입력하세요.\n");
	scanf_s("%lf %lf", &i, &j);
	printf("%lf+%lf=%lf\n%lf-%lf=%lf\n%lf×%lf=%lf\n%lf÷%lf=%lf\n",i,j,i+j,i,j,i-j,i,j,i*j,i,j,i/j);
	return 0;
}
