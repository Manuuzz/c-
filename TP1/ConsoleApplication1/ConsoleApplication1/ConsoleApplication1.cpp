#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h> //pour getch()

int main()
{
	int nb;
	printf("entrez un nombre compris entre 1 et 1000\n");
	scanf(" %d ", &nb);
	printf(" le caractère lu est : %d \n", nb);
	_getch();
	return 0;
}