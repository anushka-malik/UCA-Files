#include <stdio.h>
#include <stdlib.h>
#include "calculator1.h"

int main()
{
	int a;
	int b;
	printf("Enter a:");
	scanf("%d",&a);

	printf("Enter b:");
	scanf("%d",&b);

	printf("\nsum = %d\n",add(a,b));

	printf("diff = %d\n",sub(a,b));
	printf("pro = %d\n",mul(a,b));
	printf("division = %f\n",division(a,b));
	
	return 0;
}
