#include<stdio.h>
//사용자로부터 10진수 형태로 정수를 입력받고 이를 2진수로 변환해서 출력하는 프로그램
int main(void) {
	int num = 0,i=0,temp=0;
	int easyjinsu[16];
	printf("정수 입력:");
	scanf("%d", &num);
	for(i=0;i<16;i++){
		easyjinsu[i] = num % 2;
		num = num / 2;	
	}
	for (i = 0; i < 8; i++) {
		temp = easyjinsu[i];
		easyjinsu[i] = easyjinsu[15 - i];
		easyjinsu[15 - i] = temp;
	}
	for(i=0;i<16;i++)
		printf("%d", easyjinsu[i]);
	return 0;
}