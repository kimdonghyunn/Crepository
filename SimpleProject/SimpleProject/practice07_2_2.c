#include<stdio.h>

int main(void) {
	int i = 0, j = 0, sum = 0;
	while (i < 5){
		j = 0;
		while (j != i) {
			printf("○");
			j++;
		}
		printf("*\n");
		i++;
		}
	}