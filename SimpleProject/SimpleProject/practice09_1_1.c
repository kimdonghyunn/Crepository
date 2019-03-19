#include<stdio.h>

int Max(int i,int j,int k) {
	
	if (i >j && i>k )
		return i;
	else if (j > i && j > k)
		return j;
	else if (k > j && k > i)
		return k;
	else if (i > j && i >= k)
		return i;
	else if (i >= j && i > k)
		return i;
	else if (j > j && j >= k)
		return j;
	else if (j >= i && j > k)
		return j;
	else if (k > j && k >= i)
		return k;
	else if (k >= j && k > i)
		return k;
}
int Min(int i, int j, int k) {
	if (i < j && i < k)
		return i;
	else if (j < i && j < k)
		return j;
	else if (k < j && k < i)
		return k;
	else if (i < j && i <= k)
		return i;
	else if (i <= j && i < k)
		return i;
	else if (j < j && j <= k)
		return j;
	else if (j <= i && j < k)
		return j;
	else if (k < j && k <= i)
		return k;
	else if (k <= j && k < i)
		return k;
	
}

int main(void) {
	int i, j, k;
	printf("정수 3개를 입력하세요.");
	scanf_s("%d %d %d", &i, &j, &k);
	printf("제일 큰수는 %d 제일 작은수는 %d입니다.\n", Max(i,j,k),Min(i,j,k));
	return 0;
}