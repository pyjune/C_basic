#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


void bit_print8(int data);
// n번 비트를 1로 만드는 함수.. 
int bit_set(int data, int n);
// n번 비트를 0으로 만드는 함수..
int bit_clear(int data, int n); 

int main(int argc, char** argv) 
{
	int data = 0x50;
	
	int r = bit_set(data, 3);
	printf("r = %#x\n", r);
	bit_print8(data);
	bit_print8(r);
	
	r = bit_clear(r, 3);
	bit_print8(r);

	return 0;
}
int bit_clear(int data, int n)
{
	data = data & (~(1<<n));
	// data &= ~(1<<n);
	return data;
}
int bit_set(int data, int n)
{
	//data = data | (1<<n);
	data |= 1<<n;
	return data; 
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
