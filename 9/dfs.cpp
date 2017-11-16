#include <stdio.h>

int adj[6][6];
int visited[6];
int V;
int E;

void dfs(int n); 

int main(int argc, char** argv) 
{
	freopen("input.txt","r", stdin);
	scanf("%d %d", &V, &E);
	
	for(int i=0; i<E; i++)
	{
		int n1, n2;
		scanf("%d %d", &n1, &n2);
		adj[n1][n2] = 1;
		// adj[n2][n1] = 1; // 무향인 경우 추가 
	}
	dfs(1);
	return 0;
}

void dfs(int n)
{
	visited[n] = 1; // n번노드 방문 표시
	printf("%d ", n); 
	for(int i=1; i<=V; i++)
	{
		if(adj[n][i]==1 && visited[i]==0)// 인접이고 방문하지 않은 노드면 
		{
			dfs(i);
		}
	}
	
}
