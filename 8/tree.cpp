#include <iostream>

int V; // 노드 수 
int E; // 간선 수 

int ch1[1001];
int ch2[1001];
int par[1001];
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
	
	return 0;
}
