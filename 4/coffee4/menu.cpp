#include <stdio.h>

char menu[][11] = {"","Americano", "Latte", "Mocha", "Cappuccino"};
int menuN = sizeof(menu)/sizeof(menu[0])-1;
int price[] = {0, 1500, 2000, 2500, 3000};
// �迭����� ������ �ڵ����� ���
int priceN = sizeof(price)/sizeof(price[0])-1;  
//int priceN = 5;

int cash[] = {0, 10000, 5000, 1000}; 

void menu_change(int priceTotal, int payTotal)
{
	printf("�Ž����� %d�� �Դϴ�.\n", payTotal-priceTotal);
}

int menu_pay(int priceTotal)
{
	int payN;
	int payTotal = 0; // ���ҵ� �ݾ� �հ�

	while(payTotal<priceTotal) // ������ ������ ���� �հ�� �� 
	{
		printf("1.10000�� 2.5000�� 3.1000��\n");
		printf("�ݾ� ���� : ");
		scanf("%d", &payN);
		//payTotal = payTotal + cash[payN];
		payTotal += cash[payN]; // ���Ҿ� ���� 
		//printf("���Ҿ��� %d�� �Դϴ�.\n", cash[payN]);
		printf("���Ҿ��� %d�� �Դϴ�.\n", payTotal); //
	}
	return payTotal;
}

int menu_select(void)
{
	int choiceN;
	int priceTotal = 0;
	
	do
	{
		printf("�����ȣ (�Ϸ�� 0): ");
		scanf("%d", &choiceN);
		priceTotal += price[choiceN];
		printf("������ ����� %d�� �Դϴ�.\n", priceTotal);
	}while(choiceN != 0);
	//while(choiceN != 0);
	return priceTotal;
}

void menu_print(void)
{
	for(int i = 1; i<=priceN; i++) // priceN�� main()�ۿ��� ���� 
	{
		printf("%d.%-12s %4d��\n", i, menu[i], price[i]);
	}
}
