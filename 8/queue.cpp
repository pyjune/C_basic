#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#define QSIZE 1000
int Q[QSIZE];
int front;
int rear;
void enQ(int data);
int deQ(void);

int main(int argc, char** argv) {
	
	front = -1;
	rear = -1;
	
	enQ(1); // Q[++rear] = 1;
	enQ(2); // Q[++rear] = 2;
	enQ(3);
	
	while(front!=rear) // while(Q_isNotEmpty())
	{
		printf("%d\n", deQ()); // prinf("%d\n", Q[++front]);
	}	
	
	return 0;
}

void enQ(int data)
{
	if(rear==QSIZE-1)
		printf("Overflow!");
	else
		Q[++rear] = data;
}

int deQ(void)
{
	return Q[++front];
}
