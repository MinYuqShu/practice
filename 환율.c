#include <stdio.h>
int main() {
	int num1 = 0;
	int num3;
	float num2 = 0;

		while (1)
		{
		
			printf("[>] ��ȭ�� �ٸ� ȭ��� ȯ�����ִ� �����Դϴ�.\n");
			printf("[>]ȯ���ϰ� ���� ȭ�並 ����ּ���\n");
			printf("1. �޷�, 2. ����, 3. �Ŀ��, 4. ��, 5.����\n");
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
					printf("[>]�󸶸� ȯ���Ͻðڽ��ϱ�?\n");
					printf("[>]�Է°��� 0 < x < 100,000,000���� ���ѵ˴ϴ�.\n");
					printf("[<]");
					scanf_s("%d", &num3);
				} while (num3 > 99999999 ||num3<1);
				
					num2 = (float) num3 / 1300;
					printf("[>] %d���� �޷��� ȯ���� %.5f�޷��Դϴ�.\n", num3, num2);
					break;
				

			case 2:
				do {
					printf("[>]�󸶸� ȯ���Ͻðڽ��ϱ�?\n");
					printf("[>]�Է°��� 0 < x < 100,000,000���� ���ѵ˴ϴ�.\n");
					printf("[<]");
					scanf_s("%d", &num3);
				} 
				while  (num3 > 99999999 || num3 < 1);
				num2 = (float)num3 / 1400;
				printf("[>] %d���� ���η� ȯ���� %.5f �����Դϴ�.\n", num3, num2);	
				break;	
				
			case 3:
				do {
					printf("[>]�󸶸� ȯ���Ͻðڽ��ϱ�?\n");
					printf("[>]�Է°��� 0 < x < 100,000,000���� ���ѵ˴ϴ�.\n");
					printf("[<]");
					scanf_s("%d", &num3);
				} 
				while  (num3 > 99999999 || num3 < 1);
				num2 = (float)num3 / 1600;
				printf("[>] %d���� �Ŀ��� ȯ���� %.5f �Ŀ���Դϴ�.\n", num3, num2);
				break;
				
			case 4:
				do {
					printf("[>]�󸶸� ȯ���Ͻðڽ��ϱ�?\n");
					printf("[>]�Է°��� 0 < x < 100,000,000���� ���ѵ˴ϴ�.\n");
					printf("[<]");
					scanf_s("%d", &num3);
				} while  (num3 > 99999999 || num3 < 1);
					
						num2 = (float)num3 / 10;
						printf("[>]%d���� ������ ȯ���� %.1f ���Դϴ�\n.", num3, num2);
						break;
					
			case 5:
				do {
					printf("[>]�󸶸� ȯ���Ͻðڽ��ϱ�?\n");
					printf("[>]�Է°��� 0 < x < 100,000,000���� ���ѵ˴ϴ�.\n");
					printf("[<]");
					scanf_s("%d", &num3);
				} while  (num3 > 99999999 || num3 < 1);
				
						num2 = (float)num3 / 190;
						printf("[>]%d���� �������� ȯ���� %.4f �����Դϴ�.\n", num3, num2);
						break;
					

				}

				
				}


	return 0;
}