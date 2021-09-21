
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
int main()
{
	int i, a, b, total=0;
	
	printf("DOnnez un chiffre\n");
	scanf("%d", &a);
	printf("Donnez un 2e chiffre\n");
	scanf("%d", &b);
	if (b > 0)
	{
		for (i = 1; i <= b; i++)
		{
			total = total + a;
		}
	}
	else
	{
		for (i = 1; i <= (-b); i++)
		{
			total = total + (-a);
		}
	}
	printf("Le produit entre %d et %d est: %d", a, b, total);
}
