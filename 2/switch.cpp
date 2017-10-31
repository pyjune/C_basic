#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	int n;
	
	printf("번호 : ");
	scanf("%d", &n);
	
	
	if( n == 0)
	{
		
	}
	else if( n == 1)
	{
		
	}
	else if( n == 2)
	{
		
	}
	else
	{
		
	}
	switch(n)
	{
		case 0:
			printf("0\n");
		break;
		case 1:
			printf("1\n");
		break;
		case 2:
			printf("2\n");
		break;
		default:
			printf("3이상\n");
			
	} 
	
	// n이 점수인 경우.. 
	int score = n/10; 
	switch(score)
	{
		case 10:
			printf("Perfect "); // 실수가 아님을 보이려고 //break로 처리 
		//break; // break가 없으면 다음 케이스로 넘어감.. 
		case 9:
			printf("A\n");
		break;
		case 8:
			printf("B\n");
		break;
		case 7:
			printf("C\n");
		break;
		case 6:
			printf("D\n");
		break;
		default:
			printf("F\n");
			
	} 
	
	return 0;
}
