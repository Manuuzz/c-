
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
int main()
{
	int M;
	int A;
	int Total = 0;
	

	printf("Montant de l'article desire");
	scanf("%d", &M);
	printf("Nombre d'exemplaire attendu?");
	scanf("%d", &A);
	Total = M * A;
	if(Total>500) {
		Total = M * A * (90.0 / 100.0);
	}
	printf("La facture s'eleve a %d", Total);






}



