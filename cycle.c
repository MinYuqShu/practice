    #include <stdio.h>

    int main() {
        int num1, cycle = 0;
        int ten, one, sum;
    
        printf("[>]0~99������ ������ �Է����ּ���\n");
        printf("[<]");
        scanf_s("%d", &num1);
        int num2 = num1;

        while (1) {
            cycle++; // �ѹ� �� ���� 1�� ������....
            ten = num1 / 10; /*���� �ڸ���*/
            one = num1 % 10; /*���� �ڸ���*/
            sum = ten + one; /*�� �ڸ��� �� ��*/
            if (sum >= 10) {
                sum %= 10; /*10�� ������ ���� �ڸ����� ���*/
            }
            num1 = one * 10 + sum; /*���ڸ��� �����*/
            if (num1 == num2) { 
                break;
            }
        }

        printf("[>]�� ����Ŭ�� : %d", cycle);
        return 0;
    }
