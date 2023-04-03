#include <stdio.h>
int main() {
	int i, array[21] = { 5,3,1,7,6,8,9,2,4,19,12,14,18,13,15,11,10,17,18,20,16 };
	int max = 0;
	int num = 0;
	for (i = 0; i < sizeof(array) / 4; i++)
	{
		if (array[i] > max)
		{
			max = array[i];



		}



	}

	printf("최댓값은 %d입니다", max);

	return 0;
}


