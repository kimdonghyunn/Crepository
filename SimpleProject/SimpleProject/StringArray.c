#include<stdio.h>
//문자열을 저장하는 포인트 배열의 예
int main(void) {
	int i = 0;
	char * strArr[3] = { "Simple","String","Array" };

	char str1[] = { "kimdonghyun" };
	char str2[] = { "donghyun" };
	char str3[] = { "is 개발자" };
	char * strArr2[3] = { str1,str2,str3 };

	for (i = 0; i < 3; i++) {
		printf("%s \n", strArr[i]);
	}

	//아래와 같은 형태도 가능하다. 즉 strArr은 str1의 주소, str2의 주소, str3의 주소를 차례로 가르치고있는것이다.
	
	for (i = 0; i < 3; i++) {
		printf("%s \n", strArr2[i]);
	}
	return 0;
}