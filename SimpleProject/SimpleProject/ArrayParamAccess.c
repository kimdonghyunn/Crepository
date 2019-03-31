#include<stdio.h>
//포인터를 이용해 매개변수로 배열의 주소를이용하여 배열의 값도 바꾸어줄수있다.
void ShowArayElem(int * param, int len) {
	int i;
	for (i = 0; i < len; i++) {
		printf("%d ", param[i]);
	}
	printf("\n");
}

void AddArayElem(int * param, int len, int add) {
	int i;
	for (i = 0; i < len; i++) {
		param[i] += add;
	}
}

int main(void) {
	int arr[3] = { 1,2,3 };
	printf("%d %d %d\n", arr[0], arr[1], arr[2]);

	AddArayElem(arr, sizeof(arr) / sizeof(int),1);
	ShowArayElem(arr, sizeof(arr) / sizeof(int));
	printf("%d %d %d\n", arr[0], arr[1], arr[2]);

	AddArayElem(arr, sizeof(arr) / sizeof(int), 2);
	ShowArayElem(arr, sizeof(arr) / sizeof(int));
	printf("%d %d %d\n", arr[0], arr[1], arr[2]);

	AddArayElem(arr, sizeof(arr) / sizeof(int), 3);
	ShowArayElem(arr, sizeof(arr) / sizeof(int));
	printf("%d %d %d\n", arr[0], arr[1], arr[2]);

	return 0;
}