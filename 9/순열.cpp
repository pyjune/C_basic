#include <stdio.h>

int a[] = {1,2,3};
int used[3];
int p[3];

int b[] = {1,2,3,4,5};
int usedB[5];

void nprB(int n, int k, int m);// m개에서 k개를 골라 수열 만들기 

void npr(int n, int k);

int main(int argc, char** argv) 
{
	nprB(0,3,5);
	//npr(0, 3);
	return 0;
}
void nprB(int n, int k, int m)  
{
	if(n==k)
	{
		for(int i =0; i<k;i++)
			printf("%d ", p[i]);
		printf("\n");
	}
	else
	{
		for(int i=0; i<m; i++)
		{
			if(usedB[i]==0)
			{
				usedB[i] = 1;
				p[n] = b[i];
				nprB(n+1, k, m);
				usedB[i] = 0;
			}
		}
	}
}
void npr(int n, int k)
{
	if(n==k)
	{
		for(int i =0; i<k;i++)
			printf("%d ", p[i]);
		printf("\n");
	}
	else
	{
		for(int i=0; i<k; i++)
		{
			if(used[i]==0)
			{
				used[i] = 1;
				p[n] = a[i];
				npr(n+1, k);
				used[i] = 0;
			}
		}
	}
}
