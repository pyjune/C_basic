#include <stdio.h>
#include "function.h"


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

