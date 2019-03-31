#include<stdio.h>
//세 변수에 저장된 값을 서로 뒤바꾸는 함수
void Swap3(int * i,int * j,int * k) {
	int temp;
	temp = *i;
	*i = *k;
	*k = *j;
	*j = temp;
}
int main(void) {
	int num1 = 10, num2 = 20, num3 = 30;
	Swap3(&num1, &num2, &num3);
	printf("%d %d %d", num1, num2, num3);
	return 0;
}