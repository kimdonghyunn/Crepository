#include<stdio.h>

int main(void) {
	int num = 0, dan = 0;
	for (dan = 2; dan < 9; dan++) {
		if (dan % 2 == 0) {
			for (num = 1; num <= dan; num++) {
				printf("%d*%d=%d\n", dan, num, dan*num);
			}
		}
		else
			continue;
	}
	return 0;
}