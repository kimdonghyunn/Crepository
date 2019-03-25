#include<stdio.h>

void secToTime(void) {
	int sec=0 , min=0 , hou=0 ;
	printf("초(second) 입력\n");
	scanf("%d", &sec);
	hou = sec / 3600;
	min = (sec - (3600 * hou)) / 60;
	sec = sec - (3600 * hou) - (60 * min);
	printf("[h:%d, m:%d, s:%d]", hou, min, sec);
}
int main(void) {
	secToTime();
	return 0;
}