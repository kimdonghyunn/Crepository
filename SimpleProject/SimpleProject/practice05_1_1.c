#include<stdio.h>

int main(void) {
	int x1 = 0, y1 = 0, x2 = 0, y2 = 0;
	printf("첫번째 x,y 좌표를 차례대로 입력하세요.\n");
	scanf_s("%d %d", &x1, &y1);
	printf("두번째 x,y 좌표를 차례대로 입력하세요.\n");
	scanf_s("%d %d", &x2, &y2);
	printf("첫번째 xy좌표 (%d,%d)와 두번째 xy좌표 (%d,%d)가 이루는 사각형의 넓이는 %d입니다.", x1, y1, x2, y2, (x2 - x1)*(y2 - y1));
	return 0;

}