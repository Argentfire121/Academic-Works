#include <stdio.h>

int main(void)
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < i; j++)
		{
			printf(" ");
		}
		for (int k = 1; k <= 10 - i;k++)
		{
			printf("*");
		}
		printf("\n");
	}
return 0;
}
