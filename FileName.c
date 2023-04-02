#include <stdio.h>	
int main() {


	int num1, num2,num3;
	printf("[>] 몇 단까지 출력할지 입력해주세요\n");
	printf("[<] ");
	scanf_s("%d", &num2);

	for (num1=1;num1<=9;num1++) /*1부터 9까지 구구단 출력*/
	{
		for (num3=2;num3 <= num2; num3++) /*2단부터 입력한 값까지 출력*/
		{
			printf("%d * %d = %d\t", num3, num1 , num1 * num3);


		}
		printf("\n");



	}

       return 0;
}