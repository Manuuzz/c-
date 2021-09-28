#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include<stdio.h>
#include<conio.h>
#include <tchar.h>
void affichage(int tab[10]) {
		int i;
		for (i = 0; i < 10; i = i + 1) {
			printf("%d ", tab[i]);
		}
		printf("\n");
	}
	int main() {
		int i;
		int tab[10];
		int min;
		int indmin;
		int max;
		int indmax;

		for (i = 0; i < 10; i = i + 1) {
			printf("Quelle valeur pour la case %d ?\n", i);
			scanf("%d", &tab[i]);
		}
		printf("Tableau avant\n");
		affichage(tab);
		
		min = tab[0];
		indmin = 0;
		for (i = 1; i < 10; i++) {
			if (tab[i] < min) {
				min = tab[i];
				indmin = i;
			}
		}
		printf("Minimum : tab [%d] = %d\n", indmin, min);
		
		max = tab[0];
		indmax = 0;
		for (i = 1; i < 10; i++) {
			if (tab[i] > max) {
				max = tab[i];
				indmax = i;
			}
		}
		printf("Maximum : tab [%d] = %d\n", indmax, max);
		return 0;
}
