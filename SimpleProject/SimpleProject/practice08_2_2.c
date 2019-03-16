#include<stdio.h>

int main(void) {
	int i = 0, j = 0;
	for (i=0;i<10;i++) {
		for (j=0;j<10;j++) {
			if (((i * 10) + j) + ((j * 10) + i) == 99) {
				printf("%d%d+%d%d=99\n", i, j, j, i);
			}
			else
				continue;

		}
	}
	return 0;
}