/*
  coffee4 : 파일 분리
	coffee3 : 함수로 분리 
	coffee2 : 메뉴 누적 선택 가능
	coffee1 : 메뉴이름 추가
*/

#include <stdio.h>
#include "menu.h"



int main(void) 
{
 
 	//menu_print(); // 메뉴 출력 
	//priceTotal = menu_select(); // 메뉴 선택 -> priceTotal
	//payTotal = menu_pay(priceTotal); // 지불  <- priceTotal
	//menu_change(priceTotal, payTotal); // 거스름 계산 <- priceTotal
	//printf("menuN = %d\n", menuN); // menu.h extern 연습 
	// 음료 가격 출력
	menu_print();

	// 음료 선택
	int priceTotal = menu_select();
	
	// 지불액 선택
	int payTotal = menu_pay(priceTotal);
	
	// 거스름 계산 
	menu_change(priceTotal, payTotal);
	
	return 0;
}

