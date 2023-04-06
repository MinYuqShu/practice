#include <stdio.h>

int get_num(); //함수 선언
int main(){
	int result;  //변수 생성


	result = get_num(); //함수 호출, 반환값은 result에 저장
	printf("반환값 : %d\n", result); //반환값 출력
	
	return 0;

}

int get_num() //매개변수만 없고 반환형만 있다?
{ 
	int num; //입력값을 저장할 변수
	printf("양수 입력 : ");
	scanf_s("%d", &num);




	return num;//입력한 값 반환
}