#include<stdio.h>

int SquareByValue(int a) {
	return a * a;
}
void SquareByReference(int * a){
	(*a) *= (*a);
}
int main(void) {
	int i = 2;
	SquareByReference(&i);
	printf("%d %d", SquareByValue(2), i);
	return 0;
}