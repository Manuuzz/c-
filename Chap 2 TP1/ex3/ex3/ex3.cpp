#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include<stdio.h>
#include<conio.h>
#include <tchar.h>
int main() {
	float t[10];
	int i, somme;
	for (i = 0; i < 10; i++) {
		printf("Entrer l'element %d :", i + 1);
		scanf("%f", &t[i]);
	}
	somme = 0;
	for (i = 0; i < 10; i++) {
		somme = somme + t[i];
	}
	printf("La somme du tableau est %d", somme);

	return(0);



}