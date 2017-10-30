#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	int a = 1;
	int arr[] = {1,2,3,4,5};
	
	for(int i=0; i<5; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	
	
	float f = 1.25123456789;
	double ff = 1.25123456789; // 실수형은 기본적으로 double형 권장..
	double ffArr[] = { 1.25, 2.23, 3.56};
	printf("%f %f\n", f, ff);
	printf("%.11f %.11f\n", f, ff);

	return 0;
}
