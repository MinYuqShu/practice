#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	printf("->��������� �Է����ּ��� ex)040115\n");
	printf("00��� ���� ����� 19xx�⵵ 00��� ���ʹ� 20xx�⵵\n");
	int year, month, day, num;
	scanf("%d", & num);

	year = num / 10000;
	month = (num % 10000) / 100;
	day = (num % 10000) % 100;

	
		printf("%d�⵵ %d�� %d�Ͽ� �¾�˱���!\n", year > 23 ? 1900 + year : 2000 + year, month, day);

		return 0;
}
