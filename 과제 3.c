#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	
	printf("->숫자 3개를 입력하세요\n");
	printf("->");
	int num1, num2, num3;

	scanf("%d", &num1);
	scanf("%d", &num2);
	scanf("%d", &num3);
	
	
	int num4 = (num1 > num2 ? num1 : num2) > num3 ? (num1 > num2 ? num1 : num2) : num3; //삼항 연산자로 가장 큰 값을 정한뒤 그 값으로 변수를 설정

	
	
	printf("세 개의 숫자 중 가장 큰 값은 %d 입니다.\n",num4); //가장 큰 값을 변수로 정한 것을 출력


	return 0;

	}