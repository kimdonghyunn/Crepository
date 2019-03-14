#include<stdio.h>

int main(void) {
	int i = 0, sum = 0;
	do {
		sum += i * 2;
		i++;
	} while (i<51);
	printf("%d", sum);
	return 0;
}