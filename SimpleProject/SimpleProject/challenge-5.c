#include<stdio.h>

void prime(void) {
	int i = 0, j = 1, k = 1, sum = 0;
		for (i=0,j = 2;i<100; j++) {
			sum = 0;
			for (k = 1; k < j+1; k++) {
				if (j%k == 0) {
					sum++;
				}
			}
			if (sum == 2) {
				printf("%d ", j);
				i++;
				continue;
			}
		}
	}

int main(void) {
	prime();
	return 0;
}