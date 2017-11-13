#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

typedef struct{
	char name[20];
	int num;
	int lang;
	int eng;
	int math;
	int total;
	double avg;
}ScoreType;

int main(int argc, char** argv) {
	
	
	ScoreType score[10];
	
	freopen("score.txt", "r", stdin);
	
	int N = 0; // 학생수 
	scanf("%d", &N);
	
	for(int i = 0; i < N; i++)
	{
		//scanf("%s %d %d %d %d", score[i].name, &score[i].num);
		
		scanf("%s", score[i].name);
		scanf("%d", &score[i].num);
		scanf("%d", &score[i].lang);
		scanf("%d", &score[i].eng);
		scanf("%d", &score[i].math);
		printf("%s %d %d %d %d\n", score[i].name, score[i].num, score[i].lang, score[i].eng, score[i].math);
	}
	
	
	return 0;
}
