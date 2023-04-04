#include <stdio.h>

void swap(int* x, int* y) { // 포인터 선언
	int temp; //x, y값을 저장할 변수 설정.		
	temp = *x; // x가 가르키고 있는 값을 저장, 즉 주소에 있는 값을 저장
	*x = *y; // x가 가르키고 있는 변수를 y가 가르키는 변수로 바꿈
	*y = temp;// y가 가르키고 있는 변수를 temp에 저장한 x값으로 바꿈

}
	int main () {
		int x = 2; //변수x를 2로 초기화
		int y = 3; //변수 y를 3으로 초기화
	
		swap(&x, &y); //x와 y의 주소를 매개 변수로 함
		printf("x= %d, y= %d", x, y); // 출력


		
	return 0;
}

