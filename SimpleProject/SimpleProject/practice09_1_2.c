#include<stdio.h>

double CelToFah(double cel) {
	double fah = cel * 1.8 + 32;
	return fah;
}
double FahToCel(double fah) {
	double cel = (fah - 32)/1.8;
	return cel;
}
int main(void) {
	int opt; double cel = 0, fah = 0;
	printf("섭씨(Cel)를 화씨(Fah)로 바꾸시겠습니까? 화씨(Fah)를 섭씨(Cel)로 바꾸시겠습니까?\n");
	printf("1. 섭씨를 화씨로 2. 화씨를 섭씨로 ");
	scanf_s("%d", &opt);
	if (opt == 1) {
		
		printf("섭씨를 입력하세요.\n");
		scanf("%lf", &cel);
		printf("섭씨 %lf를 화씨로 바꾸면 %lf입니다. \n", cel, CelToFah(cel));
	}
	else if (opt == 2) {
		
		printf("화씨를 입력하세요.\n");
		scanf("%lf", &fah);
		printf("화씨 %lf를 섭씨로 바꾸면 %lf입니다. \n", fah, FahToCel(fah));
	}
	return 0;
}