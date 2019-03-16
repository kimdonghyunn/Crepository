#include<stdio.h>

int main(void) {
	int kor = 0, eng = 0, mat = 0;
	printf("국어,영어,수학의 점수를 차례대로 입력하세요.\n");
	scanf_s("%d %d %d", &kor, &eng, &mat);
	int avg = (kor + eng + mat) / 3;
	if (avg >= 90)
		printf("성적:A");
	else if (avg >= 80)
		printf("성적:B");
	else if (avg >= 70)
		printf("성적:C");
	else if (avg >= 50)
		printf("성적:D");
	else
		printf("성적:F");

	return 0;
}