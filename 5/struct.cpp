#include <stdio.h>
#include <string.h>

typedef struct{
	char name[20];
	int price;
}MenuType;

void f1(MenuType cup);
void f2(MenuType * pCup);
void f3(const MenuType * pCup);
int main(void) 
{
	MenuType cup1 = {"Latte", 1000};
	MenuType cup2;
	MenuType cup3;
	
	strcpy(cup2.name, "Mocha");
	cup2.price = 2000;
	
	cup3 = cup2;
	
	f1(cup3); // 그러나 구조체 변수를 통째로 복사해 넘기지는 않음... 
	f2(&cup3);
	f3(&cup3); // read-only인 경우 const 사용.. 
	printf("%s %d\n", cup3.name, cup3.price );
	printf("%s %d\n", cup2.name, cup2.price );
	//cup1.price = 100;
	printf("%s %d\n", cup1.name, cup1.price );
	return 0;
}

void f1(MenuType cup)
{
	printf("f1: %s %d\n", cup.name, cup.price);
}

void f2(MenuType * pCup)
{
	pCup->price = 3000;
	//(*pCup).price = 2000;
}

void f3(const MenuType * pCup)
{
	printf("f3 : %s %d\n", pCup->name, pCup->price);
	//pCup->price = 0;

}
