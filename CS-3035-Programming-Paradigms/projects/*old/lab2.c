#include <stdio.h>

int main (void)
{
	int numInt1;
	int numInt2;

	printf("Enter the first integer: ");
	scanf("%d", &numInt1);

	if (numInt1 % 2 == 0)
	{
		printf("%d is even\n", numInt1);
	}	

	else
	{
		printf("%d is odd\n", numInt1);
	}

	return 0;
}
