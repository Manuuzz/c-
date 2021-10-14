#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>
#include <conio.h>
#include<string.h>
int main()
{
	char s[100];
	char *p;
	char c;
	printf("Entrez une chaine de caractere:\n");
	gets_s(s);
	printf("Entrez un caractere: ");
	scanf("%c", &c);
	p = strrchr(s, c);
	
	printf("Le caractere %c se trouve a la %d position en partant de la gauche", c, p-s+1);

	return 0;
}

/*Le programme parcours la chaine de caractère pour trouver le 1er caractère de la chaîne qui a été 
						donné par l'utilisateur*/