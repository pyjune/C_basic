#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	int score = 40;
	
	// 50점이 이상인가?
	if( score >= 50 )
		printf("50점 이상\n");
	
	// 50점이 이상인가?
	if( score >= 50 )
		printf("50점 이상\n");
	else
		printf("아니..ㅋㅋㅋ\n"); 
	
	// 70점 이상 high, 40점 미만 low, 중간 mid
	if(score>=70)
	{
		printf("High\n"); 
	}
	else // 70점 미만인 경우 
	{
		if(score>=40)
		{
			printf("Mid\n");
		}
		else
		{
			printf("Low\n");
		}
	}
	// 70점 이상 high, 40점 미만 low, 중간 mid
	if(score>=70)
	{
		printf("High\n");
	}
	else if(score>=40) // 70점 미만이면서 40점 이상인 경우 
	{
		printf("Mid\n");
	}
	else
	{
		printf("Low\n");
	}
	
	// 90점 이상은 Special..
	if(score>=70)
	{
		if(score>=90)
			printf("Special\n");
		else
			printf("High\n"); 
	}
	else // 70점 미만인 경우 
	{
		if(score>=40)
		{
			printf("Mid\n");
		}
		else
		{
			printf("Low\n");
		}
	}
	
	if(score>=90)
	{
		printf("Special\n");
	}
	else if(score>=70)
	{
		printf("High\n");
	}
	else if(score>=40) // 70점 미만이면서 40점 이상인 경우 
	{
		printf("Mid\n");
	}
	else
	{
		printf("Low\n");
	}
	
	// 40점이상  60점 미만인가?
	if( score < 60 && score >= 40 )
	{
		printf("OK\n");
	}
	
	// 0점 미만이거나 100점을 초과하면
	if( score < 0 || score > 100 )
	{
		printf("Error\n");
	} 
	else
	{
		// 등급표시.. 
	}
	// 점수비교..
	if( score>=0 && score<=100)
	{
		// 등급표시..
	}
	else
	{
		printf("Error\n");	
	}
	return 0;
}
