/*
	coffee1 : 메뉴이름 추가
	coffee2 : 메뉴 누적 선택 가능 
*/

#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
char menu[][11] = {"","Americano", "Latte", "Mocha", "Cappuccino"};
int menuN = sizeof(menu)/sizeof(menu[0])-1;
int price[] = {0, 1500, 2000, 2500, 3000};
// 배열요소의 개수를 자동으로 계산
int priceN = sizeof(price)/sizeof(price[0])-1;  
//int priceN = 5;

int cash[] = {0, 10000, 5000, 1000}; 

int main(void) 
{
 
	// 음료 가격 출력
	// 1. 1500원 
	// 2. 2000원 
	// 3. 2500원 
	
	//for(int i = 1; i<=3; i++) // 배열이 바뀌면 수정필요 
	for(int i = 1; i<=priceN; i++) // priceN만 main()밖에서 수정 
	{
		printf("%d.%-12s %4d원\n", i, menu[i], price[i]);
	}
	/*
	printf("1.1500원\n");
	printf("2.2000원\n");
	printf("3.2500원\n");*/
	
	// 음료 선택
	int choiceN;
	int priceTotal = 0;
	do
	{
		printf("음료번호 (완료는 0): ");
		scanf("%d", &choiceN);
		priceTotal += price[choiceN];
		printf("선택한 음료는 %d원 입니다.\n", priceTotal);
	}while(choiceN != 0);
	// 지불액 선택
	int payN;
	int payTotal = 0; // 지불된 금액 합계

	while(payTotal<priceTotal) // 선택한 음료의 가격 합계와 비교 
	{
		printf("1.10000원 2.5000원 3.1000원\n");
		printf("금액 선택 : ");
		scanf("%d", &payN);
		//payTotal = payTotal + cash[payN];
		payTotal += cash[payN]; // 지불액 누적 
		//printf("지불액은 %d원 입니다.\n", cash[payN]);
		printf("지불액은 %d원 입니다.\n", payTotal); //
	}
	// 거스름 계산 
	
	printf("거스름은 %d원 입니다.\n", payTotal-priceTotal);
	
	return 0;
}
