#include <stdio.h>	
int main() {


	int num1, num2,num3;
	printf("[>] �� �ܱ��� ������� �Է����ּ���\n");
	printf("[<] ");
	scanf_s("%d", &num2);

	for (num1=1;num1<=9;num1++) /*1���� 9���� ������ ���*/
	{
		for (num3=2;num3 <= num2; num3++) /*2�ܺ��� �Է��� ������ ���*/
		{
			printf("%d * %d = %d\t", num3, num1 , num1 * num3);


		}
		printf("\n");



	}

       return 0;
}