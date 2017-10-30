#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	 
	//int n[10] = { 7,2,4,5,1,3,10,6,8,9};
	int n[10] = { 1,2,3,4,5,6,7,8,9,10};
	// 3개씩 부분합을 구해 최대값 찾기..
	
	int sum = 0;
	int maxV = 0;
	//int N = 10;
	int N = sizeof(n)/sizeof(int); // 배열의 크기를 계산으로 알아냄 
	// int N = sizeof(n)/sizeof(n[0]);
	int M = 3;
	
	
	//for(int i = 0; i<=(10-3); i++)
	for(int i = 0; i<=(N-M); i++)
	{
		sum = n[i] + n[i+1] + n[i+2];
		if( sum > maxV )
			maxV = sum;
	} 
	printf("maxV = %d\n", maxV);

	return 0;
}
