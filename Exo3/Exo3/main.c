#include <stdlib.h>
#include <stdio.h>

int main() {
	char nom[20], prenom[20], sexe;
	printf("Nom : ");
	scanf_s("%s", nom, (unsigned)_countof(nom));
	printf("Prenom : ");
	scanf_s("%s", prenom, (unsigned)_countof(prenom));
	printf("Sexe : ");
	sexe = _getch();
	if (sexe == 'H') { printf("Monsieur "); }
	else { printf("Madame "); }
	printf("%s %s", prenom, nom);
}