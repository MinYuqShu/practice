    #include <stdio.h>

    int main() {
        int num1, cycle = 0;
        int ten, one, sum;
    
        printf("[>]0~99사이의 정수를 입력해주세요\n");
        printf("[<]");
        scanf_s("%d", &num1);
        int num2 = num1;

        while (1) {
            cycle++; // 한번 다 돌면 1씩 더해짐....
            ten = num1 / 10; /*십의 자리수*/
            one = num1 % 10; /*일의 자리수*/
            sum = ten + one; /*각 자리수 의 합*/
            if (sum >= 10) {
                sum %= 10; /*10이 넘으면 일의 자리수만 사용*/
            }
            num1 = one * 10 + sum; /*두자리수 만들기*/
            if (num1 == num2) { 
                break;
            }
        }

        printf("[>]총 사이클수 : %d", cycle);
        return 0;
    }
