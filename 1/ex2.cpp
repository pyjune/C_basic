#include <stdio.h>

int main(void) 
{
	 
	int n[10] = { 7,2,4,5,1,3,10,6,8,9};
	// int n[] = { 7,2,4,5,1}; // int n[5]크기로 만들어짐..
	// int n[10] =  { 7,2,4,5,1}; // 10칸 중 나머지는 0으로 채워짐 
	int maxValue = 0;
	
	// 배열 출력..
	// 배열의 인덱스는 변수 사용 가능..
	int i = 4;
	printf("%d\n", n[i]); 

	// 전체 구각 i : 0 -> 9 
	for(int i = 0; i < 10 ; i++) // 0부터 시작. 10개
	// for(int i = 0; i<= 9; i++ ) // 0부터 9까지 
	{
		//printf("%d\n", n[i]); 
		printf("a[%d] = %d\n", i, n[i]);
	}
	// 가장 큰 수 찾기
	// 전체 구각 i : 0 -> 9에 대해 max와 비교..
	/* 비교연산자.. 
	printf("%d\n", n[0]>max);
	printf("%d\n", n[0]<max);
	printf("%d\n", n[0]==max);
	printf("%d\n", n[0]>=max);*/
	maxValue = 0; 
	for(int i = 0; i < 10 ; i++) // 0부터 시작. 10개
	// for(int i = 0; i<= 9; i++ ) // 0부터 9까지 
	{
		if( n[i] > maxValue ) // if( max < n[i] )
		{
			maxValue = n[i];
		}
	} 
	printf("maxValue = %d\n", maxValue); 
	// max를  n[0] 으로 초기화
	maxValue = n[0]; 
	for(int i = 1; i < 10 ; i++) // 0부터 시작. 10개
	// for(int i = 0; i<= 9; i++ ) // 0부터 9까지 
	{
		if( n[i] > maxValue ) // if( max < n[i] )
		{
			maxValue = n[i];
		}
	} 
	printf("maxValue = %d\n", maxValue);
	// maxIdx를 사용해 비교..
	int maxIdx = 0;
	for(int i = 1; i < 10 ; i++) // 0부터 시작. 10개
	// for(int i = 0; i<= 9; i++ ) // 0부터 9까지 
	{
		if( n[i] > n[maxIdx] ) // if( max < n[i] )
		{
			maxIdx = i;
		}
	} 
	printf("maxValue = %d\n", n[maxIdx]); 
	 
	return 0;
}
