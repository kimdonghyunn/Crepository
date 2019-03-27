#include<stdio.h>

int main(void) {
	int i, arlen;
	char arraay[] = {"\"Good Time\""};
	printf("배열 사이즈:%d\n", sizeof(arraay));
	arlen = sizeof(arraay) / sizeof(char);
	for (i = 0; i < arlen; i++){
	printf("%c", arraay[i]);
	}
	return 0;
}
