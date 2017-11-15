#include <iostream>

int V; // 노드 수 
int E; // 간선 수 

int ch1[1001];
int ch2[1001];
int par[1001];
int cnt;
void findA(int n); // 조상찾기
void dlr(int n); // 탐색.. 

int main(int argc, char** argv) 
{
	freopen("tree.txt", "r", stdin);	
	scanf("%d %d", &V, &E);

	
	for(int i=0; i<E; i++)
	{
		int p, c;
		scanf("%d %d", &p, &c);
		// 부모를 인덱스로 자식저장 
		if(ch1[p]==0)
			ch1[p] = c;
		else
			ch2[p] = c;
		// 자식을 인덱스로 부모저장
		par[c] = p;
	}
	
	findA(4); // 5번의 조상 출력 
	cnt = 0;
	dlr(1); // 1번부터 탐색..
	printf("\n"); 
	printf("%d\n", cnt);
	
	return 0;
}

void dlr(int n)
{
	printf("%d ", n); // visit(n)
	cnt++;
	if(ch1[n]!=0)
		dlr(ch1[n]);
	if(ch2[n]!=0)
		dlr(ch2[n]);	
} 

void findA(int n)
{
	while(par[n]!=0)
	{
		n = par[n];
		printf("%d ", n);
	}
	printf("\n");
}
