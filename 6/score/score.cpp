#include <stdio.h>
#include "score.h"

void print_all(int N, ScoreType score[])
{

	for(int i = 0; i < N; i++)
	{
		//scanf("%s %d %d %d %d", score[i].name, &score[i].num);
		
		scanf("%s", score[i].name);
		scanf("%d", &score[i].num);
		scanf("%d", &score[i].lang);
		scanf("%d", &score[i].eng);
		scanf("%d", &score[i].math);
		score[i].total = score[i].lang+score[i].eng+score[i].math;
		score[i].avg = (double)score[i].total/3;
	}
	for(int i=0; i<N; i++)
	{
		printf("%s %d %d %d %d %d %.2f\n", score[i].name, score[i].num, 
					score[i].lang, score[i].eng, 
					score[i].math, score[i].total, score[i].avg);
	}
}
