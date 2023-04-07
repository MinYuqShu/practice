#include <stdio.h>
int main() {
	int score[5]; // 5과목 배열 선언
	int i; //조건문을 위한 변수 선언
	int total = 0; // 배열 숫자 넣기 위한 변수, 초기화
	double avg; //
	for (i = 0; i < 5; i++) {

		scanf_s("%d", &score[i]);


	}
	for (i = 0; i < 5; i++) {

		total += score[i]; //성적 더하기

	}
	avg = total / 5.0; // 평균구하기
	for (i = 0; i < 5; i++) {

		printf("%5d", score[i]);

	}
	printf("\n");
	printf("평균 : %.1lf\n", avg);










	return 0;
}