#include<stdio.h>
int main()
{
	int x, i;
	printf("Enter number : ");
	scanf_s("%d", &x);
	printf("Factoring Result : ");
	for (i = 2; i <= x; i++)
	{
		if (x % i == 0)
		{
			printf("%d", i);
			x = x / i;
			i = 1;
			if (i < x)
			{
				printf(" x ");
			}
		}
	}
	return 0;
}
