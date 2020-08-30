#include<stdio.h>
int main()
{
	int x, y = 0;
	printf("Enter number to count ");
	scanf_s("%d", &x);
	while (x > 0)
	{
		y = y + (x % 10);
		x = x / 10;
	}
	printf("%d", y);
}