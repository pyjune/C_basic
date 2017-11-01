#include <stdio.h>

// 인자도 없고 리턴값도 없는 경우..
void f1(void);
// 인자가 있고 리턴값은 없는 경우..
void f2(int n);
// 인자는 없고 리턴값은 있는 경우..
int f3(void);
// 인자도 있고 리턴값도 있는 경우..
int f4(int n); 


int main(void) 
{
	int n = 100;
	f1();
	f2(100);
	// f2(n);
	int r = f3();
	printf("r = %d\n", r);
	// printf("r = %d\n", f3());
	r = f4(3);
	printf("r = %d\n", r);
	return 0;
}

// 인자도 없고 리턴값도 없는 경우..
void f1(void)
{
	printf("매개변수도 없고 리턴도 없는 함수\n");
	return;
}
// 인자가 있고 리턴값은 없는 경우..
void f2(int n)
{
	printf("f2()의 입력은 %d입니다.\n", n);
	return;
}
// 인자는 없고 리턴값은 있는 경우..
int f3(void)
{
	printf("이 함수가 실행되면 3을 남깁니다..\n");
	return 3;
}
// 인자도 있고 리턴값도 있는 경우..
int f4(int n)
{
	printf("입력을 4배로 만들어드립니다..\n");
	return n*4; 
} 
