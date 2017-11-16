#include <stdio.h>

int arr[3];
int num[3] = {1,2,3};

void f(int n, int k);
void subset(int n, int k);
void subset2(int n, int k);

int main(int argc, char** argv) 
{
	subset2(0, 3);
	//subset(0, 3);
	//f(0, 3);
	return 0;
}

void subset2(int n, int k)
{
	if(n==k)
	{
		for(int i = 0; i<k; i++)
		{
			if(arr[i] ==1)
				printf("%d ", num[i]);
		}
		printf("\n");
	}
	else
	{
		for(int i = 0; i<=1; i++)
		{
			arr[n] = i;
			subset2(n+1, k);
		}
	}
}
void subset(int n, int k)
{
	if(n==k)
	{
		for(int i = 0; i<k; i++)
			printf("%d ", arr[i]);
		printf("\n");
	}
	else
	{
		for(int i = 0; i<=1; i++)
		{
			arr[n] = i;
			subset(n+1, k);
		}
		/*
		arr[n] = 0;
		subset(n+1, k);
		arr[n] = 1;
		subset(n+1, k);
		*/
	}
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
