#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

typedef struct{
	char name[20];
	int price;
}MenuType;

int main(int argc, char** argv) 
{
	MenuType menu[41];
	
	FILE * fp;
	int menuNum = 0; //메뉴의 개수.. 
	
	fp = fopen("menu.txt", "rt");
	if(fp==NULL)
	{
		printf("파일이 열리지 않습니다.\n");
		return 0;
	}
	int i = 1;
	while(fscanf(fp, "%s %d", menu[i].name, &menu[i].price) != EOF)
	{
		i++;
	}
	menuNum = i-1;
	
	for(int i = 1; i<=menuNum; i++)
		printf("%d.%-16s %3d\n", i, menu[i].name, menu[i].price);
	return 0;
}
