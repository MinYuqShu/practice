#include <stdio.h>

int get_num(); //�Լ� ����
int main(){
	int result;  //���� ����


	result = get_num(); //�Լ� ȣ��, ��ȯ���� result�� ����
	printf("��ȯ�� : %d\n", result); //��ȯ�� ���
	
	return 0;

}

int get_num() //�Ű������� ���� ��ȯ���� �ִ�?
{ 
	int num; //�Է°��� ������ ����
	printf("��� �Է� : ");
	scanf_s("%d", &num);




	return num;//�Է��� �� ��ȯ
}