#include<stdio.h>
// 배열을 선언하고, 총10개의 정수를 입력받아 홀수와 짝수를 구분지어 출력하는 프로그램
void hol(int *num) {
	int i = 0;
	printf("홀수 출력:");
	for (i = 0; i < 10; i++) {
		if (num[i] % 2 == 0) {
			printf("%d ", num[i]);
		}
	}
}
void jjak(int *num) {
	int i = 0;
	printf("홀수 출력: ");
	for (i = 0; i < 10; i++) {
		if (num[i] % 2 != 0) {
			printf("%d ", num[i]);
		}
	}
}
int main(void) {
	int num[10], i=0;
	for(i=0;i<10;i++){
		printf("정수 입력:");
		scanf("%d", &num[i]);
	}
	hol(num);
	jjak(num);
	return 0;
}