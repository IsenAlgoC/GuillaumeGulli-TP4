#include <stdio.h>
#define SEPARATEUR '/' 
#define TAILLETAB1 20

int main() {
	int MyTab1[TAILLETAB1];
	for (int Compteur = 0; Compteur < TAILLETAB1; Compteur++) {
		MyTab1[Compteur] = Compteur + 1;
		printf(" %d  %c", MyTab1[Compteur], SEPARATEUR);
	}
	int* MyPtr1;
	MyPtr1 = &MyTab1[19]; // On initialise le pointeur à l'adresse de la valeur MyTab1[19]
	printf("\n");
	for (MyPtr1; MyPtr1 != &MyTab1[0]; MyPtr1--) { // Tant que l'adresse du pointeur n'est pas égale à la première valeur du Tableau on décrémente.
		printf(" %d  %c", *MyPtr1, SEPARATEUR);
	}
	printf(" %d  %c", MyTab1[0], SEPARATEUR);
}