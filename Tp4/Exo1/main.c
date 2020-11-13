#include "tp4.h"
#include <stdlib.h>
#include <stdio.h>
int main() {
	HEURE HeureDebut, HeureFin, Duree;
	HeureDebut.heure = 12;
	HeureDebut.minute = 30;
	Duree.heure = 0;
	Duree.minute = 45;

	HeureFin.minute = HeureDebut.minute + Duree.minute;
	HeureFin.heure = HeureDebut.heure + Duree.heure;
	if (HeureFin.minute / 60 >= 1) {
		HeureFin.heure += HeureFin.minute / 60;
		HeureFin.minute = HeureFin.minute % 60;
	}
	printf("Depart %02d:%02d Duree %02d:%02d Arrivee %02d:%02d", HeureDebut.heure, HeureDebut.minute, Duree.heure, Duree.minute, HeureFin.heure, HeureFin.minute);

}