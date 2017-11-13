#include <stdio.h>

int main(int argc, char** argv) {
	int N = 0;
	int cnt[10] = {0};
	
	freopen("input.txt","r",stdin);
	
	scanf("%d", &N);
	for(int i=0; i<N; i++)
	{
		int c;
		scanf("%d", &c);
		cnt[c]++;
	}
	// 오름차순 정렬...
	for(int i = 0; i<10; i++)
	{
		if(cnt[i] !=0 )
		{
			for(int j = 0; j<cnt[i]; j++)
				printf("%d ", i);
		}	
	} 
	
	/*
	int maxIdx = 1;
	for(int i = 2; i<=9; i++)
	{
		if(cnt[maxIdx]<cnt[i])
			maxIdx = i;
	}
	printf("최다득표 %d번 : %d표\n", maxIdx, cnt[maxIdx]);
	*/
	return 0;
}
