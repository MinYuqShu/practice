#include <stdio.h>
int main() {
	int score[5]; // 5���� �迭 ����
	int i; //���ǹ��� ���� ���� ����
	int total = 0; // �迭 ���� �ֱ� ���� ����, �ʱ�ȭ
	double avg; //
	for (i = 0; i < 5; i++) {

		scanf_s("%d", &score[i]);


	}
	for (i = 0; i < 5; i++) {

		total += score[i]; //���� ���ϱ�

	}
	avg = total / 5.0; // ��ձ��ϱ�
	for (i = 0; i < 5; i++) {

		printf("%5d", score[i]);

	}
	printf("\n");
	printf("��� : %.1lf\n", avg);










	return 0;
}