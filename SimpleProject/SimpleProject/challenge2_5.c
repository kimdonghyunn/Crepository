#include<stdio.h>
//버블정렬 입력한 값을 앞뒤로 비교하여 옮기고 한cycle이 끝나면 다음 cycle은 끝에요소를 제외하고 점점 줄어들며 정렬하는 방법
void DesSort(int arr[], int len);

int main(void) {
	int arr[7];
	int i = 0;
	for (i = 0; i < 7; i++) {
		printf("입력:");
		scanf("%d", &arr[i]);
	}
	DesSort(arr, sizeof(arr) / sizeof(int));
	for (i = 0; i < 7; i++)
		printf("%d ", arr[i]);
	return 0;
}

void DesSort(int arr[], int len) {
	int i = 0, j = 0, temp = 0;
	for (i = 0; i < len - 1; i++) {
		for (j = 0; j < (len - i) - 1; j++) {
			if (arr[j] < arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}