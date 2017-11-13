#include <stdio.h>
#include "score.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void find_1st(int N, ScoreType score[]);
void find_last(int N, ScoreType score[]);

int main(int argc, char** argv) {
	
	
	ScoreType score[10];
	
	freopen("score.txt", "r", stdin);
	
	int N = 0; // 학생수 
	scanf("%d", &N);
	// readdata();
	// calc();
	
	print_all(N, score);
	find_1st(N, score); // 평균점수가 print_all()에서 계산이 되므로.. 
	find_last(N, score);
	return 0;
}

void find_1st(int N, ScoreType score[])
{
	double maxAvg = 0;
	// double maxAvg = score[0].avg;
	
	int maxIdx = 0; // 값이 아니라 누구인지를 찾으려고 함.. 
	for(int i = 1; i<N; i++) // i=0인 경우 자신과 비교하면서 시작 
	{
		if(score[maxIdx].avg<score[i].avg)
		{
			maxIdx = i;
		 } 
	}
	printf("1등 : %d %s %.2f점\n", score[maxIdx].num, score[maxIdx].name, 
								score[maxIdx].avg);
}

void find_last(int N, ScoreType score[])
{
	
	int minIdx = 0; // 값이 아니라 누구인지를 찾으려고 함.. 
	for(int i = 1; i<N; i++) // i=0인 경우 자신과 비교하면서 시작 
	{
		if(score[minIdx].avg > score[i].avg)
		{
			minIdx = i;
		 } 
	}
	printf("%d등 : %d %s %.2f점\n", N,score[minIdx].num, score[minIdx].name, 
								score[minIdx].avg);
}
