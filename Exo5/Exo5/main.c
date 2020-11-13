#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include <string.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "fr-FR");

	char phrase[1024];
	int nbmots = 1;
	float caracteres = 0.00;

	printf("Entrez une phrase : ");

	gets_s(phrase, 1024);

	for (int i = 1; i < strlen(phrase); i++) {
		if (phrase[i] == ' ') {
			nbmots++;
		}
		else {
			caracteres++;
		}
	}

	printf("\nIl y a %d mots dans votre phrase", nbmots);
	printf("\nIl y a en moyenne %.4f caractères dans vos mots ", caracteres / nbmots);
}