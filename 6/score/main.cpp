#include <stdio.h>
#include "score.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */



int main(int argc, char** argv) {
	
	
	ScoreType score[10];
	
	freopen("score.txt", "r", stdin);
	
	int N = 0; // 학생수 
	scanf("%d", &N);
	
	print_all(N, score);
	
	return 0;
}

