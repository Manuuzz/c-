#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <stdlib.h>
int main(){


char ch[101]; 
char *pch;    
int alp[26];  
int *palp;    

	printf("Entrez votre texte:\n");
	gets_s(ch);

	for (palp = alp; palp < alp + 26; palp++)
		*palp = 0;

	for (pch = ch; *pch; pch++)
	{
		if (*pch >= 'A' && *pch <= 'Z')
			(*(alp + (*pch - 'A')))++; 
		if (*pch >= 'a' && *pch <= 'z')
			(*(alp + (*pch - 'a')))++;
	}

	printf("Le texte \"%s\" contient :\n", ch);
	for (palp = alp; palp < alp + 26; palp++)
		if (*palp)
			printf(" %d\tfois la lettre '%c' \n",
				*palp, 'A' + (palp - alp));

return 0;
}


