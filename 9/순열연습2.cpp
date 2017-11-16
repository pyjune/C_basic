#include <stdio.h>
// t[사람][일] 
int t[5][5] = {
5, 2, 1, 1, 9,
3, 3, 8, 3, 1,
9, 2, 8, 8, 6,
1, 5, 7, 8, 3,
5, 5, 4, 6, 8};

int a[] ={0,1,2,3,4}; // 사람 번호 
int used[5];
int p[5];

int min;
void find(int n, int k, int cost);

int main(int argc, char** argv) 
{
	min = 0x7fffffff; // int형 양수중 가장 근값 
	find(0, 5, 0);
	
	printf("%d\n", min);
	return 0;
}

void find(int n, int k, int cost)
{
	if(n==k)
	{
		if(min >cost)
			min = cost;
	}
	else if(cost>=min)
	{
		return;
	}
	else
	{
		for(int i=0; i<k; i++)
		{
			if(used[i]==0)
			{
				used[i] = 1;
				p[n] = a[i];
				
				find(n+1, k, cost+t[p[n]][n]);
				used[i] = 0;
			}
		}
	}
}
