#include<stdio.h>
// 매개변수로 배열을 통째로 전달받을 수 없으므로, 포인터를 사용하여 주소값을 통해 배열을 읽어들인다.
void ShowArayElem(int * param, int len) {
	int i;
	for (i = 0; i < len; i++) {
		printf("%d ", param[i]);
	}
	printf("\n");
}
int main(void) {
	int arr1[3] = { 1,2,3 };
	int arr2[5] = { 4, 5, 6, 7, 8 };
	ShowArayElem(arr1, sizeof(arr1) / sizeof(int));
	ShowArayElem(arr2, sizeof(arr2) / sizeof(int));
	return 0;
}