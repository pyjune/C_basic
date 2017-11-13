#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void sort(int arr[], int N);
void sort2d(int arr[][8], int N);

int main(int argc, char** argv) {
	int A[] = {7,3,8,1,5,2,4,6};
	int B[][8] = {{7,3,8,1,5,2,4,6},
					{1,2,3,4,5,6,7,8}};
					
	int N = sizeof(A)/sizeof(A[0]);
	
	sort(A, N);
	
	for(int i=0; i<N; i++)
	{
		printf("%d ", A[i]);
	}
	printf("\n");
	
	sort2d(B, N);
	for(int i=0; i<N; i++)
	{
		printf("%d ", B[1][i]);
	}
	printf("\n");
	return 0;
}

void sort2d(int arr[][8], int N)
{
	for(int i=0; i<=N-2; i++)
	{
		int minIdx = i;
		for(int j = i+1; j<N; j++)  // (int j = i+1; j<=N-1; j++)
		{
			if(arr[0][minIdx]>arr[0][j])
				minIdx = j;
		}
		int tmp = arr[0][minIdx];
		arr[0][minIdx] = arr[0][i];
		arr[0][i] = tmp;
		
		tmp = arr[1][minIdx];
		arr[1][minIdx] = arr[1][i];
		arr[1][i] = tmp;
	}
}

void sort(int arr[], int N)
{
	for(int i=0; i<=N-2; i++)
	{
		int minIdx = i;
		for(int j = i+1; j<N; j++)  // (int j = i+1; j<=N-1; j++)
		{
			if(arr[minIdx]>arr[j])
				minIdx = j;
		}
		int tmp = arr[minIdx];
		arr[minIdx] = arr[i];
		arr[i] = tmp;
	}
}
