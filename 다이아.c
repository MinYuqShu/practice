#include <stdio.h>
int main() {
	int num1, num2, num3; // 변수 선언하기 
	

	printf("[>] 크기를 입력해주세요\n");
	printf("[<]");
	scanf_s("%d", &num3); // 원하는 크기의 값 입력


	for (num1 = 0; num1 < num3; num1++) { /*입력한 수만큼 반복하기  */


		for (num2 = num3 - 1; num2 > num1; num2--) /* 처음엔 입력한 값의 1을 뺀 값 만큼 공백을 찍고, 그 다음 줄엔 공백이 1씩 줄어듬. */
		
		{
			printf(" ");
		}
		for(num2=0;num2<2*num1+1;num2++)/* 별만들기 0부터 시작해서x2+1해서 별 찍기*/
		{
			printf("*");
		}

		printf("\n");/*별찍고 다음줄에 별찍기*/


	}
	for (num1 = 1; num1 < num3; num1++) /* 입력한 값의 1을 뺀 값 만큼 반복을 함 */
	{


		for (num2 = 0; num2 < num1; num2++) // num1이 1부터 시작이라 1찍고 시작함, num1은 점점 커지기 때문에 num2도 점점 커짐, 따라서 갈수록 공백이 커짐
		{
			printf(" ");
		}

		for (num2 = 2 * num3 - 1; num2 > 2 * num1; num2--) // 입력한 값의 *2 -1 - 2의 배수(num1) 만큼 별이 찍힘 num1이 점점 커짐으로 별이 점점 적게 찍힘 
			printf("*");

		printf("\n");
}
	

	
	return 0;

}
