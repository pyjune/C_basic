#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	/*
	for(;;)
	{
		printf("무한\n");
	}
	*/
	/*
	while(1) // 무한.. 
	{
		printf("무한\n");
	}
	*/
	// 10번 반복.. 
	for( int i = 0; i<10; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	
	int i = 0;
	while(i<10)
	{
		printf("%d ",i);
		i++;
	}
	// 1부터 자연수의 합이 1000이 넘으면 중단..
	printf("\n");
	
	int sum = 0;
	int num = 0;
	while(sum<=1000) // 조건을 만족하는 동안 반복.. 
	{
		num++;
		sum = sum + num;
		// sum += num++;
	} 
	printf("num = %d\n", num);
	// break 활용 
	num = 0;
	sum = 0;

	while(1) // 조건을 만족하는 동안 반복.. 
	{
		num++;
		sum = sum + num;
		if(sum>1000)
		{
			break; // 가장 가까운 반복문만 벗어남.. 
		}
		// sum += num++;
	}
	
	
	printf("num = %d\n", num);
	return 0;
}
