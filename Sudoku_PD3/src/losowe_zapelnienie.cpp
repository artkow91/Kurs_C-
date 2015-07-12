/*
 * losowe_zapelnienie.cpp
 *
 *  Created on: 12 lip 2015
 *      Author: Artur
 */

#include "header.h"

void losowe_zapelnienie(int** tab, int wymiar, int ile_pol) {
	srand(time(NULL));

	int tab_wartosci[81][10];
	int pomoc = 0;
	for (int i = 0; i < 81; i++) {
		for (int j = 0; j < 10; j++) {
			tab_wartosci[i][j] = 0;
		}
	}
	int licznik = 0;
	for (int wiersz = 0; wiersz < wymiar; wiersz++) {
		for (int kolumna = 0; kolumna < wymiar; kolumna++) {

			int rand_wartosc = (rand() % wymiar) + 1;

			if (sprawdzenie_wiersza(tab, wymiar, rand_wartosc, wiersz)
					&& sprawdzenie_kolumny(tab, wymiar, rand_wartosc, kolumna)) {

				tab[wiersz][kolumna] = rand_wartosc;
				licznik = 0;
				wyswietlenie_planszy(tab, wymiar);

			} else if (licznik == 20) {
				cofnij_o_jeden(tab, tab_wartosci, pomoc, wiersz, kolumna, wymiar);

			} else {
				kolumna--;
				licznik++;
			}

		}
	}

}
