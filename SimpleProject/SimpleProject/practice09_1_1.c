#include<stdio.h>

int Max(int n1,int n2,int n3) {
	
	if (n1 > n2)
		return (n1 > n3) ? n1 : n3;
	else
		return (n2 > n3) ? n2 : n3;
}
int Min(int n1, int n2, int n3) {
	if (n1 < n2)
		return(n1 < n3) ? n1 : n3;
	else
		return(n2 < n3) ? n2 : n3;
}

int main(void) {
	int i, j, k;
	printf("정수 3개를 입력하세요.");
	scanf_s("%d %d %d", &i, &j, &k);
	printf("제일 큰수는 %d 제일 작은수는 %d입니다.\n", Max(i,j,k),Min(i,j,k));
	return 0;
}