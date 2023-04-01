#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	printf("->생년월일을 입력해주세요 ex)040115\n");
	printf("00년생 이전 사람은 19xx년도 00년생 부터는 20xx년도\n");
	int year, month, day, num;
	scanf("%d", & num);

	year = num / 10000;
	month = (num % 10000) / 100;
	day = (num % 10000) % 100;

	
		printf("%d년도 %d월 %d일에 태어나셧군요!\n", year > 23 ? 1900 + year : 2000 + year, month, day);

		return 0;
}
