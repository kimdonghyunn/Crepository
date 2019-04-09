#include<stdio.h>

int arr[5][5];
int sum = 0;
void sungjukip(void) {
	int i = 0, j = 0, sum = 0, sum2 = 0;
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			printf("%d번째 학생의 국어,영어,수학,국사 점수입력", i + 1);
			scanf("%d", &arr[i][j]);
		}
	}
}

void studentsum(void) {
	int i = 0, j = 0;
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			arr[i][4] += arr[i][j];
			
		}
	}
}

void gwamoksum(void) {
	int i = 0, j = 0;
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			arr[4][i] += arr[j][i];
		}

		sum += arr[4][i];
	}
}


void chulruk(void) {
	int i = 0, j = 0;
	arr[4][4] = sum;
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}
int main(void) {
	sungjukip();
	studentsum();
	gwamoksum();
	chulruk();
}