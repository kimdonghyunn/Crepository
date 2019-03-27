#include<stdio.h>

int main(void) {
	char eng[150];
	char big=0;
	int i;
	printf("단어입력:");
	scanf("%s", eng);
	big = eng[0];
	for (i = 1; eng[i] != '\0'; i++) {
		if (big < eng[i]) {
			big = eng[i];
		}
	}
	printf("%c",big);
	return 0;
}