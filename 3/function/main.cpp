#include <stdio.h>
#include "function.h"

int gVar1;		// 함수끼리 혹은 파일끼리 공유하는 경우 
int gVar2 = 10;
int gVar3;
int gArr[1000000]; // 크기가 큰 경우 전역에.. 
void change_gVar1(int n);

int main(void) 
{
	int n = 100;
	
	gVar1 = 10;
	printf("gVar1 = %d\n", gVar1); 
	printf("gVar2 = %d\n", gVar2);
	
	change_gVar1(100);
	printf("gVar1 = %d\n", gVar1);
	
	f_change_gVar1(300);
	printf("gVar1 = %d\n", gVar1);
	
	f1();
	f2(100);
	// f2(n);
	int r = f3();
	printf("r = %d\n", r);
	// printf("r = %d\n", f3());
	r = f4(3);
	printf("r = %d\n", r);
	
	
	return 0;
}

void change_gVar1(int n)
{
	gVar1 = n;
}
