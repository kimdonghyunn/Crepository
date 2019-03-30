#include<stdio.h>

int main(void) {
	int num1 = 10, num2 = 20;
	int * ptr1 = &num1;
	int * ptr2 = &num2;
	int * temp;
	(*ptr1) += 10;		//num1은 20
	(*ptr2) -= 10;		//num2는 10
	temp=ptr1;			//temp에 ptr1의 주소값을 일단 대입
	ptr1 = ptr2;		//ptr1에 ptr2의 주소값 대입, 그럼 이제 ptr1을 출력하면 10이 출력될것
	ptr2 = temp;		//ptr2에 temp에 저장되어있던 ptr1의 주소값 대입, 이제 ptr2출력하면 20출력
	printf("ptr1:%d ptr2:%d", *ptr1, *ptr2);
	return 0;
}