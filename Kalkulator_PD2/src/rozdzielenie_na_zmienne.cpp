/*
 * podzielenie_na_dwie_zmienne.cpp
 *
 *  Created on: 10 lip 2015
 *      Author: Artur
 */

#include "header.h"

void rozdzielenie_na_zmienne(string &linia, float tab[]) {                                                            //dziala tylko dla dwuelementowej tablicy

	int zmienna_iteracji = 0;
	int numer_zmiennej = 0;
	string bufor;
	bufor.clear();                                                            //wyszyszczenie stringa

	do {
		if ((int) linia[zmienna_iteracji] == 32 || (int) linia[zmienna_iteracji] == 0) {                                                            //sprawdzenie czy obecny znak jest spacja(32) albo enterem(0)
			tab[numer_zmiennej] = stof(bufor);                                                            //rzutowanie stringa na float
			numer_zmiennej++;                                                            //przesunięcie się na następną zmienną
			bufor.clear();                                                            //wyczyszczenie bufora
		} else {
			bufor += linia[zmienna_iteracji];                                                            //dodanie kolejnego znaku do bufora
		}
		zmienna_iteracji++;                                                            // sprawdzenie kolejnego znaku

	} while (numer_zmiennej != 2);                                                            //jesli uzyskalismy dwie zmienne w tablicy konczymy funkcje

}

