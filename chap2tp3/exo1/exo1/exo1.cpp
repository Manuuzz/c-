#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <tchar.h>
#include <conio.h>
#include <string.h>
int main()
{
	char str[100], rev[100];
	int t, i, j;
	printf("Entrez une chaine de caractère: ");
	gets_s(str);

	j = 0;
	t = strlen(str);
	rev[t] = '\0';
	for (i = t - 1; i >= 0; i--)
	{
		rev[j++] = str[i];
	}
	
	printf("Chaîne de caractère apres inversion = %s", rev);
	return 0;




}