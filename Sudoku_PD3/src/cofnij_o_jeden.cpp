/*
 * cofnij_o_jeden.cpp
 *
 *  Created on: 12 lip 2015
 *      Author: Artur
 */

#include "header.h"

void cofnij_o_jeden(int ** tab, int tab_wartosci[][10], int &pomoc, int &wiersz,
		int &kolumna, int wymiar) {

	cout << "Cofam się o jeden" << '\t' << kolumna << '\t' << wiersz << endl;
	kolumna--;
	int counter =0;
	while (tab_wartosci[(wiersz * 9) + kolumna][pomoc] != 0) {
		pomoc++;
	}

	tab_wartosci[(wiersz * 9) + kolumna][pomoc] = tab[wiersz][kolumna];
	tab[wiersz][kolumna] = 0;

	int wartosc_pomoc = tab_wartosci[(wiersz * 9) + kolumna][pomoc];

	while (1) {

		wartosc_pomoc++;
		counter ++;
		if (wartosc_pomoc > 9) {
			wartosc_pomoc = 0;
		}

		if (sprawdzenie_wiersza(tab_wartosci, wymiar, wartosc_pomoc, wiersz, kolumna)
				&& sprawdzenie_wiersza(tab, wymiar, wartosc_pomoc, wiersz)
				&& sprawdzenie_kolumny(tab, wymiar, wartosc_pomoc, kolumna)) {

			tab[wiersz][kolumna] = wartosc_pomoc;
			pomoc=0;
			cout << "WARTOSC POPRAWIONA" << endl;

			break;
		} else if(counter == 20 ){
			cofnij_o_jeden(tab,tab_wartosci, pomoc, wiersz, kolumna, wymiar);
			break;
		}
	}
}

