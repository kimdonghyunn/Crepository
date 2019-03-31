#include<stdio.h>

int main(void) {
	char str1[] = "My string"; //str1은 My string이라는 문자열을 저장하고있는 배열이다.
	char * str2 = "Your stirng"; //str2는 단순히 your string 이라는 문자열의 첫번째 글자인 y를 가르치는 포인터변수임.
	printf("%s %s\n", str1, str2);

	str2 = "Our String"; //다른곳을 가르칠수있음. 포인터기 때문에 변경을 하는것이아님!
	printf("%s %s \n", str1, str2);

	str1[0] = 'X'; //변경 가능.
	//str2[0] = 'X'; 오류가 난다. 변경불가
	printf("%s %s \n", str1, str2);
	return 0;
}