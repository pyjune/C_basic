#include <stdio.h>
// t[사람][일] 
int t[][3] = {13, 8, 10,
				7, 10, 12,
				12, 8, 10};
int a[] ={0,1,2}; // 사람 번호 
int used[3];
int p[3];

int min;
void find(int n, int k);

int main(int argc, char** argv) 
{
	min = 0x7fffffff; // int형 양수중 가장 근값 
	find(0, 3);
	
	printf("%d\n", min);
	return 0;
}

void find(int n, int k)
{
	if(n==k)
	{
		int total = 0; // 시간합계 
		for(int i=0; i<k;i++) 
		{
			total += t[p[i]][i];
			printf("%d ", p[i]);
		}
		printf(" : %d\n", total);
		if(min >total)
			min = total;
	}
	else
	{
		for(int i=0; i<k; i++)
		{
			if(used[i]==0)
			{
				used[i] = 1;
				p[n] = a[i];
				find(n+1, k);
				used[i] = 0;
			}
		}
	}
}
