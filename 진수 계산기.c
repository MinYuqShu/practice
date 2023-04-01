#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int num1;
    printf("숫자를 입력하세요 -> ");
	scanf("%d", &num1);
	printf("%d\n", num1);
	printf("8진수 : %o\n", num1);
	printf("16진수 : %x", num1);

	return 0;
}