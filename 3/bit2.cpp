#include <stdio.h>

void bit_print8(int data);
// n번 비트를 1로 만드는 함수.. 
int bit_set(int data, int n);
// n번 비트를 0으로 만드는 함수..
int bit_clear(int data, int n); 
// n번 비트가 1이면 1반환, 아니면 0반환..
int bit_isSet(int data, int n);
// n번 비트가 0이면 1반환, 아니면 0반환.. 
int bit_isClear(int data, int n);
// n번 비트부터 0번 비트까지 출력
int bit_printN(int data, int n);
 
int main(int argc, char** argv) 
{
	int data = 0x50;
	
	int r = bit_set(data, 3);
	printf("r = %#x\n", r);
	bit_print8(data);
	bit_print8(r);
	
	r = bit_clear(r, 3);
	bit_print8(r);

	if(bit_isSet(data, 7)) // data의 4번비트가 1이면.. 
	{
		printf("7번비트가 1\n");
	}
	if(bit_isClear(data, 7)) // data의 4번비트가 1이면.. 
	{
		printf("7번비트가 0\n");
	}
	
	bit_printN(data, 31);
	bit_printN(data, sizeof(data)*8-1);
	
	return 0;
}
int bit_isClear(int data, int n)
{
	if((data&(1<<n)) == 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int bit_isSet(int data, int n)
{
	if((data&(1<<n)) != 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}	
}

int bit_isSet2(int data, int n)
{
	data = data&(1<<n);
	data = data>>n;
	return data;
}

int bit_clear(int data, int n)
{
	//bit_print8(data);
	//bit_print8(1<<n);
	//bit_print8((~(1<<n)));
	
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

int bit_printN(int data, int n)
{
	for(int i=n; i>=0; i--)
	{
		if((data&(1<<i))==0)
			printf("0");
		else
			printf("1");
	}
	printf("\n");
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
