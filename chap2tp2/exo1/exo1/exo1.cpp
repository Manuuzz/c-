#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <tchar.h>
int main()
{
	float t[3][4];
	int i, somme;
	for (i = 0; i < 10; i++) {
		printf("Entrer l'element %d :", i + 1);
		scanf("%f", &t[i][i]);
	}
	somme = 0;
	for (i = 0; i < 10; i++) {
		somme = somme + t[i][i];
	}
	printf("La somme du tableau est de %d", somme);
	return(0);

}
