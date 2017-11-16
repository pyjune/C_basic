#include <stdio.h>

int a[] = {1,2,3};
int rp[3]; 

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
		for(int i = 0; i<k; i++)
			printf("%d ", rp[i]);
		printf("\n");
	}
	else
	{
		for(int i =0; i<k; i++)
		{
			rp[n] = a[i];
			f(n+1, k);
		}
	}
}
