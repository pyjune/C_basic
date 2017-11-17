#include <stdio.h>

int adj[11][11]; // 노드가 최대 10번까지 처리.. 
int visited[11];
int Q[11];
int front;
int rear;

int V;
int E;

void bfs(int n);

int main(int argc, char** argv) 
{
	freopen("bfs.txt", "r", stdin);
	
	front = -1;
	rear = -1;
	
	scanf("%d %d", &V, &E);
	for(int i=0; i<E; i++)
	{
		int n1, n2;
		scanf("%d %d", &n1, &n2);
		adj[n1][n2] = 1;
		adj[n2][n1] = 1;
	}
	bfs(2);
	
	return 0;
}

void bfs(int n)
{
	Q[++rear] = n; // enqueue
	visited[n] = 1;
	while(front!=rear) // 큐가 비어있지 않으면	
	{
		n = Q[++front]; // dequeue
		printf("%d \n", n);
		for(int i=1; i<=V; i++)
		{
			if(adj[n][i]==1 && visited[i]==0)
			{
				Q[++rear] = i;
				visited[i] = visited[n] + 1;
			}
		}
	}
} 





