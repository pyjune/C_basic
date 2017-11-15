#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#define QSIZE 1000
#define STACK_SIZE 1000
int Q[QSIZE];
int STACK[STACK_SIZE];
int front;
int rear;
void enQ(int data);
int deQ(void);

int top;
void push(int data);
int pop();

int main(int argc, char** argv) {
	// stack
	top = -1;
	push(1);
	push(2);
	push(3);
	while(top>=0)	// while(stack_isNotEmpty()) 
	{
		printf("%d\n", pop());
	}
	
	
	// queue
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
void push(int data)
{
	if(top==STACK_SIZE-1)
		printf("Overflow!");
	else
		STACK[++top] = data;
}

int pop(void)
{
	return STACK[top--];
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
