/*
 * cofnij_o_jeden.cpp
 *
 *  Created on: 12 lip 2015
 *      Author: Artur
 */

#include "header.h"

void cofnij_o_jeden(int ** tab, int tab_wartosci[][10], int &pomoc, int &wiersz,
		int &kolumna, int wymiar) {

	for (int i = 0; i < 10; i++) {
		tab_wartosci[wiersz * 9 + kolumna][i] = 0;
	}

	kolumna--;                                                            //cofamy się w lewo o jedno pole

	if (kolumna < 0) {                                                            // jeśli jesteśmy na lewym krańcu przesówamy się o jeden wiersz do góry
		wiersz--;                                                            //i przenosimy się na prawy kraniec planszy
		kolumna = 8;
	}

	int counter = 0;                                                            //zmienna licząca ilosc nieudanych prób znalezienia odpowiedniej wartosci

	while (tab_wartosci[(wiersz * 9) + kolumna][pomoc] != 0) {                                                            //jesli w danym polu tablicy pomocniczej jest jakas wartosc przesun się na kolejne pole
		pomoc++;
	}

	tab_wartosci[(wiersz * 9) + kolumna][pomoc] = tab[wiersz][kolumna];                                                            //przepisanie wartosci aktualnego pola do pomocniczej tablicy w celu późniejszego sprawdzenia które cyfry były w dane pole wpisywane
	tab[wiersz][kolumna] = 0;                                                            //wyzerowanie danego pola planszy

	int wartosc_pomoc = tab_wartosci[(wiersz * 9) + kolumna][pomoc];

	while (1) {

		wartosc_pomoc++;                                                            //zwiększenie poprzedniej wartosci pola o jeden
		counter++;
		if (wartosc_pomoc > 9) {
			wartosc_pomoc = 0;
		}

		if (sprawdzenie_wiersza(tab_wartosci, wymiar, wartosc_pomoc, wiersz, kolumna)                                                            //sprawdzenie czy aktualna wartosc spełnia wszystkie warunki
		&& sprawdzenie_wiersza(tab, wymiar, wartosc_pomoc, wiersz)
				&& sprawdzenie_kolumny(tab, wymiar, wartosc_pomoc, kolumna)
				&& sprawdzenie_malego_kwadratu(tab, wymiar, wartosc_pomoc, kolumna,
						wiersz)) {

			tab[wiersz][kolumna] = wartosc_pomoc;                                                            //jesli spełnia zostaje wpisana do pola planszy
			pomoc = 0;

			break;
		} else if (counter == 11) {                                                            //jeśli po 11 próbach nie udaje się znalezc odpowiedniej wartosci
			cofnij_o_jeden(tab, tab_wartosci, pomoc, wiersz, kolumna, wymiar);                                                            //zostaje ponownie wywolana funkcja cofnij o jeden
			break;
		}
	}
}

