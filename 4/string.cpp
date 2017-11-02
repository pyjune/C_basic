#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void)
{
	char str1[] = "La tte";
	char str2[] = {'L','a','t','t','e','\0'}; // == "Latte"
	char str4[6] = {'L','a','t','t','e'}; // == "Latte"
	char str3[] = {'L','a','t','t','e'};  // != "Latte"
	
	char menu[][10] = { "",
						"Americano",
						"Latte",
						"Mocha"};
	for(int i = 1; i<=3; i++)
		printf("%s\n", menu[i]);				
						
	printf("%s\n", str1);
	printf("%s\n", str2);
	printf("%s\n", str3);
	printf("%s\n", str4);
	
	
	//printf("Latte!\n");
	

	return 0;
}
