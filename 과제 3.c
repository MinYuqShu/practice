#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	
	printf("->���� 3���� �Է��ϼ���\n");
	printf("->");
	int num1, num2, num3;

	scanf("%d", &num1);
	scanf("%d", &num2);
	scanf("%d", &num3);
	
	
	int num4 = (num1 > num2 ? num1 : num2) > num3 ? (num1 > num2 ? num1 : num2) : num3; //���� �����ڷ� ���� ū ���� ���ѵ� �� ������ ������ ����

	
	
	printf("�� ���� ���� �� ���� ū ���� %d �Դϴ�.\n",num4); //���� ū ���� ������ ���� ���� ���


	return 0;

	}