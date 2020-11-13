#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
//#include <conio.h>

# define Taille 20


int main() {
	char Mot[Taille]; 
	int Testeur = 1;
	int Longueur = 0;
	int Compteur = 0;
	printf("Veuillez entrer un mot d'au plus 20 caracteres :\n");
	while (Testeur == 1) {
		gets_s(Mot, 20);
		Longueur = strlen(Mot);
		for (Compteur = 0; Compteur < Longueur; Compteur++) {
			Mot[Compteur] = tolower(Mot[Compteur]);
			if (Mot[Compteur] < 'a' || Mot[Compteur] > 'z') {
				printf("\n Saisie invalide, veuillez reprendre la saisie : \n");
				Compteur = Longueur;
			}
			else {
				Testeur = 0;
			}
		}
	}
	Testeur = 1;
	int c = Longueur / 2;
	for (Compteur = 0; Compteur < c; Compteur++) {
		if (Mot[Compteur] != Mot[Longueur - Compteur - 1]) {
			printf("\n Ceci n'est pas un mot palyndrome \n");
			Testeur = 0;
			Compteur = c;
		}
	}

	if (Testeur == 1) {
		printf(" \nC'est un palyndrome \n");
	}
	system("pause");
	return (EXIT_SUCCESS);
}