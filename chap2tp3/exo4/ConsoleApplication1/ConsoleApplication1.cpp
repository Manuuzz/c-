#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
int main()
{
	char str[100];
	int i;
	printf("\n Saisissez une phrase/mot : ");
	gets_s(str);
	for (i = 0; str[i] != '\0'; i++) {
		
		if (str[i] >= 'A' && str[i] <= 'Z') {
			str[i] = str[i] + 32;
		}
	}
	printf("\n La chaine en minuscule est %s", str);
	return 0;
}

/*Ici, le programme va prendre les majuscules et leur ajouter +32 dans la table ascii
pour qu'elles se transforment en minuscule*/

