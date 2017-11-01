#ifndef __FUNCTION_H__
#define __FUNCTION_H__

// 인자도 없고 리턴값도 없는 경우..
void f1(void);
// 인자가 있고 리턴값은 없는 경우..
void f2(int n);
// 인자는 없고 리턴값은 있는 경우..
int f3(void);
// 인자도 있고 리턴값도 있는 경우..
int f4(int n); 
// 전역변수 gVar1을 바꾸는 함수.. 
void f_change_gVar1(int n);

#endif // __FUNCTION_H__
