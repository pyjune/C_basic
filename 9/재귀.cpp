#include <stdio.h>

void f(int n, int k);

int main(int argc, char** argv) 
{
	
	f(0, 3);
	return 0;
}

void f(int n, int k)
{
	if(n==k)
	{
		printf("n==k\n");
	}
	else
	{
		printf("%d %d\n", n, k);
		f(n+1, k);
	}
}
