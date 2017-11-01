#include <stdio.h>

//int gVar1; //static int gVar1;
extern int gVar1;

void f_count(void)
{
	static int cnt; // 전역 영역에 생성되므로 0으로 초기화됨..
	cnt++;
	printf("cnt = %d\n", cnt); 
}
void f_change_gVar1(int n)
{
	gVar1 = n;
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
