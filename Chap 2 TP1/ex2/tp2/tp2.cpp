#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include<stdio.h>
#include<conio.h>
#include <tchar.h>

int main() {
	float t1[10], t2[10];
	int i,c;
	for (i = 0; i < 10;  i++) {
		printf("Entrer l'element %d :", i + 1);
		scanf("%f", &t2[i]);
	}
	c = 0;
	for (i = 0; i < 10; i++) {
		if (t2[i] >= 0) {
			t1[c] = t2[i];
			c = c + 1;
		}

	}
	for (i = c; i < 10; i++) {
		t1[i] = 0;
	}
	printf("\nAffichage du tableau 1 contenant les entiers positif: \n");
	for (i = 0; i < 10; i++) {
		printf("%f\t", t1[i]);
	}
	





}