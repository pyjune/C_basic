#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void bit_print8(int data);

int main(int argc, char** argv) 
{
	int a = 0x1a;
	int b = a<<2;
	
	printf("a = 0x%X\n", a);
	printf("a = %#x\n", a);
	printf("b = %#x\n", b);
	
	printf("a<<2 = %#x\n", a*4);
	
	//a = -1;
	
	for(int i=7; i>=0; i--)
	{
		if((a&(1<<i))==0)
			printf("0");
		else
			printf("1");
	}
	printf("\n");
	
	// a의 2번비트를 1로 만들기..
	a |= 1<<2;
	//a |= 1<<7|1<<2; // 2번과 7번비트 1로 만들기.. 
	for(int i=7; i>=0; i--)
	{
		if((a&(1<<i))==0)
			printf("0");
		else
			printf("1");
	}
	printf("\n"); 
	// a의 3번비트를 0으로 만들기
	a &= ~(1<<3);
	for(int i=7; i>=0; i--)
	{
		if((a&(1<<i))==0)
			printf("0");
		else
			printf("1");
	}
	printf("\n");
	
	// a의 3번비트를 반전..
	a ^= 1<<3;
	for(int i=7; i>=0; i--)
	{
		if((a&(1<<i))==0)
			printf("0");
		else
			printf("1");
	}
	printf("\n");
	// a의 3번비트를 반전..
	printf("함수사용\n");
	a ^= 1<<3;
	bit_print8(a);
	/*
	for(int i=7; i>=0; i--)
	{
		if((a&(1<<i))==0)
			printf("0");
		else
			printf("1");
	}
	printf("\n");
	*/  
	return 0;
}

void bit_print8(int data)
{
	for(int i=7; i>=0; i--)
	{
		if((data&(1<<i))==0)
			printf("0");
		else
			printf("1");
	}
	printf("\n");
}
