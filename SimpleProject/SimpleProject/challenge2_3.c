#include<stdio.h>
// 길이가 10인 배열선언후 10개의 정수입력, 입력받은 숫자가 홀수면 앞에서부터, 짝수면 뒤에서부터 채워간다.
int main(void) {
	int arr[10];
	int i = 0, f = 0, b = 1, temp=0;
	while (i < 10) {
		printf("입력:");
		scanf("%d", &temp);
		if (temp % 2 == 0) {
			arr[10 - b] = temp;
			b++;
		}
		else {
			arr[f] = temp;
			f++;
		}
		i++;
	}
	for(i=0;i<10;i++){
		printf("%d ", arr[i]);
	}
	return 0;
}