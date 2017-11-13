#ifndef _SCORE_H_
#define _SCORE_H_

typedef struct{
	char name[20];
	int num;
	int lang;
	int eng;
	int math;
	int total;
	double avg;
}ScoreType;

void print_all(int N, ScoreType score[]);


#endif
