#include <stdio.h>
int main() {
	int num1, num2, num3;
	

	printf("[>] 크기를 입력해주세요\n");
	printf("[<]");
	scanf_s("%d", &num3);


	for (num1 = 0; num1 < num3; num1++) { /*입력한 수만큼 반복하기  */


		for (num2 = num3 - 1; num2 > num1; num2--) /*공백 만들기 */
		{
			printf(" ");
		}
		for(num2=0;num2<2*num1+1;num2++)/* 별만들기 0부터 시작해서x2+1해서 별 찍기*/
		{
			printf("*");
		}

		printf("\n");/*별찍고 다음줄에 별찍기*/


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