#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void f1(int * ptr);
void f2(int data);
void f3(int * ptr);
void farr(const int pArr[]);
void farr2(const int * pArr);

int main(void) 
{
	int a = 10;
	int arr[] = {10, 20, 30, 40, 50};
	 
	int * pA;
	
	farr(arr);
	farr2(arr);
	printf("arr[0] = %d\n", arr[0]);
	
	pA = &a;
	
	printf("a = %d\n", a);
	printf("*pA = %d\n", *pA);
	
	f2(a);
	printf("a = %d\n", a);
	f1(&a);
	printf("a = %d\n", a);
	
	return 0;
}

void farr2(const int * pArr)
{
	for(int i=0; i<4; i++)
		printf("pArr[%d] = %d\n", i, *(pArr+i));

}
void farr(const int pArr[])
{
	for(int i=0; i<4; i++)
		printf("pArr[%d] = %d\n", i, pArr[i]);
	//pArr[0] = 0;
}

void f2(int data)
{
	data = 100;
}

void f1(int * ptr)
{
	//*ptr = 100;
	f3(ptr);
}

void f3(int * ptr)
{
	*ptr = 10000;
}
