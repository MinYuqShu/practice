#include <stdio.h>
int main() {
	int num1, num2, num3;
	

	printf("[>] ũ�⸦ �Է����ּ���\n");
	printf("[<]");
	scanf_s("%d", &num3);


	for (num1 = 0; num1 < num3; num1++) { /*�Է��� ����ŭ �ݺ��ϱ�  */


		for (num2 = num3 - 1; num2 > num1; num2--) /*���� ����� */
		{
			printf(" ");
		}
		for(num2=0;num2<2*num1+1;num2++)/* ������� 0���� �����ؼ�x2+1�ؼ� �� ���*/
		{
			printf("*");
		}

		printf("\n");/*����� �����ٿ� �����*/


	}
	for (num1 = 1; num1 < num3; num1++)
	{


		for (num2 = 0; num2 < num1; num2++)
		{
			printf(" ");
		}

		for (num2 = 2 * num3 - 1; num2 > 2 * num1; num2--)
			printf("*");

		printf("\n");
}
	

	
	return 0;

}