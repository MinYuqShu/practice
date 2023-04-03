#include <stdio.h>
int main() {
	int num1 = 0;
	int num3;
	float num2 = 0;

		while (1)
		{
		
			printf("[>] 원화를 다른 화폐로 환전해주는 계산기입니다.\n");
			printf("[>]환전하고 싶은 화페를 골라주세요\n");
			printf("1. 달러, 2. 유로, 3. 파운드, 4. 엔, 5.위안\n");
			printf("[>]");
			scanf_s("%d", &num1);
	
			if (num1 >= 6 || num1<=0)

			{
				break;
			}
			 
			switch (num1)
			{
			case 1:



				do {
					printf("[>]얼마를 환전하시겠습니까?\n");
					printf("[>]입력값은 0 < x < 100,000,000으로 제한됩니다.\n");
					printf("[<]");
					scanf_s("%d", &num3);
				} while (num3 > 99999999 ||num3<1);
				
					num2 = (float) num3 / 1300;
					printf("[>] %d원은 달러로 환전시 %.5f달러입니다.\n", num3, num2);
					break;
				

			case 2:
				do {
					printf("[>]얼마를 환전하시겠습니까?\n");
					printf("[>]입력값은 0 < x < 100,000,000으로 제한됩니다.\n");
					printf("[<]");
					scanf_s("%d", &num3);
				} 
				while  (num3 > 99999999 || num3 < 1);
				num2 = (float)num3 / 1400;
				printf("[>] %d원은 유로로 환전시 %.5f 유로입니다.\n", num3, num2);	
				break;	
				
			case 3:
				do {
					printf("[>]얼마를 환전하시겠습니까?\n");
					printf("[>]입력값은 0 < x < 100,000,000으로 제한됩니다.\n");
					printf("[<]");
					scanf_s("%d", &num3);
				} 
				while  (num3 > 99999999 || num3 < 1);
				num2 = (float)num3 / 1600;
				printf("[>] %d원은 파운드로 환전시 %.5f 파운드입니다.\n", num3, num2);
				break;
				
			case 4:
				do {
					printf("[>]얼마를 환전하시겠습니까?\n");
					printf("[>]입력값은 0 < x < 100,000,000으로 제한됩니다.\n");
					printf("[<]");
					scanf_s("%d", &num3);
				} while  (num3 > 99999999 || num3 < 1);
					
						num2 = (float)num3 / 10;
						printf("[>]%d원은 엔으로 환전시 %.1f 엔입니다\n.", num3, num2);
						break;
					
			case 5:
				do {
					printf("[>]얼마를 환전하시겠습니까?\n");
					printf("[>]입력값은 0 < x < 100,000,000으로 제한됩니다.\n");
					printf("[<]");
					scanf_s("%d", &num3);
				} while  (num3 > 99999999 || num3 < 1);
				
						num2 = (float)num3 / 190;
						printf("[>]%d원은 위안으로 환전시 %.4f 위안입니다.\n", num3, num2);
						break;
					

				}

				
				}


	return 0;
}