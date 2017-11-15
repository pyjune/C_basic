// 계산식을 입력 받아 괄호를 검사하는 프로그램...
// 계산식의 길이는 최대 100글자 이내.. 

#include <stdio.h>

int stack[100];
int top;
void push(int data);
int pop(void);

int main(int argc, char** argv) {
		
	char str[101];
	printf("수식입력 : ");
	scanf("%s", str);
	
	top = -1;
	int i = 0;
	while(str[i] != '\0')
	{
		if(str[i]=='(')
		{
			push(1);
		}
		else if(str[i]==')')
		{
			if( top>=0) // 여는 괄호가 남아있으면 
				pop();
			else
			{
				printf("여는 괄호 부족\n");
				return 0;
			}
		}
		i++;
	}
	if(top==-1)
	{
		printf("정상\n");
	}
	else
	{
		printf("닫는 괄호 부족\n");
	}
	
	 
	return 0;
}

void push(int data)
{
	stack[++top] = data;
}
int pop(void)
{
	return stack[top--];
}
