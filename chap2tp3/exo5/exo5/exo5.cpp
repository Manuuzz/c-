#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char Phrase[100];
	char NouvPhrase[100];
	int i;
	int j=0;
	int a = strlen(Phrase);
	printf("Entrez une chaine de caractere:");
	gets_s(Phrase);
	for (i = 0; i < a; i++) {
		if (Phrase[i] != ' ')
		{
			NouvPhrase[j++] = Phrase[i];
		}

	}
	printf("%s\n", NouvPhrase);
	return 0;
}

/*Le programme va demander une phrase, et va ensuite voir ou il y'a des espaces pour les supprimer*/