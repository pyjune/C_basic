#include <stdio.h>
#include <stdlib.h>
// 1 : wall, 0 : path, 2 : visited
int miro[8][8] = {
	1, 1, 1, 1, 1, 1, 1, 1,
	1, 0, 0, 0, 1, 0, 1, 1,
	1, 0, 1, 0, 1, 0, 0, 0,
	0, 0, 1, 1, 1, 0, 1, 1,
	1, 0, 0, 0, 0, 0, 0, 1,
	1, 1, 1, 0, 1, 0, 1, 1,
	1, 0, 0, 0, 1, 0, 0, 1,
	1, 1, 1, 1, 1, 1, 1, 1
};

typedef struct PosType_{
	int x;
	int y;
}PosType;

PosType stack[64];
int top = -1;
PosType inPos = {0,3};
PosType outPos = {7,2};
void push(PosType cur);
PosType pop(void);
void print_miro(PosType cur);
void print_path(void);

int main(void)
{
	PosType cur = inPos;
	while(1)
	{
		if((cur.x == outPos.x)&&(cur.y == outPos.y))
			break;
		miro[cur.y][cur.x] = 2;
		if( miro[cur.y+1][cur.x] == 0 )
		{
			push(cur);
			cur.y++;
		}
		else if( miro[cur.y][cur.x+1] == 0 )
		{
			push(cur);
			cur.x++;
		}
		else if( miro[cur.y-1][cur.x] == 0 )
		{
			push(cur);
			cur.y--;
		}
		else if( miro[cur.y][cur.x-1] == 0 )
		{
			push(cur);
			cur.x--;
		}
		else
		{
			if( top == -1 )
			break;
				cur = pop();
		}
		print_miro(cur);
	}
	if((cur.x == outPos.x)&&(cur.y == outPos.y))
	{
		puts("도착\n");
	}
	else
	{
		puts("실패\n");
	}
	print_path();
}
void push(PosType pos)
{
	stack[++top] = pos;
}
PosType pop(void)
{
	return stack[top--];
}
void print_path(void)
{
	int i;
	for ( i = 0 ; i <= top ; i++ )
	{
		printf("%d.(%d,%d)\n", i+1,
		stack[i].x, stack[i].y);
	}
}
void print_miro(PosType cur)
{
	int i, j;
	system("CLS");
	for( i = 0 ; i < 8 ; i++ )
	{
		for( j = 0 ; j < 8 ; j++ )
		{
			if(( cur.x == j )&&( cur.y == i))
			{
				putchar('@');
			}
			else
			{
			if( miro[i][j] == 1)
				putchar('*');
			else if( miro[i][j] == 0 )
				putchar(' ');
			else if( miro[i][j] == 2 )
				putchar('.');
			}
		}
		printf("\n");
	}
}
