#include<stdio.h>

void TGIF(void) {
	int money = 0, bre = 500, shr = 700, cok = 400, i = 1, j = 1, k = 1;
	printf("당신이 소유한 금액을 입력하세요.\n");
	scanf_s("%d", &money);
	printf("현재 당신이 소유하고 있는 금액:%d\n", money);
	//(bre*i) + (shr*j) + (cok*k) == money;
	for (i = 1; i < 10; i++) {
		if ((bre*i) + (shr*j) + (cok*k) == money) {
			printf("빵:%d개 과자:%d개 음료:%d개\n", i, j, k);
		}
		for (j = 1; j < 10; j++) {
			if ((bre*i) + (shr*j) + (cok*k) == money) {
				printf("빵:%d개 과자:%d개 음료:%d개\n", i, j, k);
			}
			for (k = 1; k < 10; k++) {
				if ((bre*i) + (shr*j) + (cok*k) == money) {
					printf("빵:%d개 과자:%d개 음료:%d개\n", i, j, k);
				}
			}
		}
	}
}

int main(void) {
	TGIF();
	return 0;
}