/*
 * losowe_zapelnienie.cpp
 *
 *  Created on: 12 lip 2015
 *      Author: Artur
 */

#include "header.h"

void losowe_zapelnienie(int** tab, int wymiar) {
	srand(time(NULL));

	int tab_wartosci[81][10];                                                            //na każde pole planszy przypada 10 elementowa tablica do przechowywania wartosci które były już wpisywane
	int pomoc = 0;                                                            //zmienna do przesówania się po w/w tablicy
	for (int i = 0; i < 81; i++) {
		for (int j = 0; j < 10; j++) {
			tab_wartosci[i][j] = 0;                                                            //zerowanie tablicy
		}
	}

	int licznik = 0;

	for (int wiersz = 0; wiersz < wymiar; wiersz++) {
		for (int kolumna = 0; kolumna < wymiar; kolumna++) {

			int rand_wartosc = (rand() % wymiar) + 1;                                                            // wylosowanie wartosci z zakresu 1-9

			if ((wymiar == 9)
					&& sprawdzenie_wiersza(tab, wymiar, rand_wartosc, wiersz)                                                            //sprawdzenie czy dana wartosc w danym polu spełnia wszystkie 3 warunki sudoku
					&& sprawdzenie_kolumny(tab, wymiar, rand_wartosc, kolumna)
					&& sprawdzenie_malego_kwadratu(tab, wymiar, rand_wartosc, kolumna,
							wiersz)) {

				tab[wiersz][kolumna] = rand_wartosc;                                                            // jesli spełnia wartosc zostaje wpisana w pole
				licznik = 0;

			} else if (sprawdzenie_wiersza(tab, wymiar, rand_wartosc, wiersz)                                                            //sprawdzenie czy dana wartosc w danym polu spełnia wszystkie 3 warunki sudoku
			&& sprawdzenie_kolumny(tab, wymiar, rand_wartosc, kolumna)) {
				tab[wiersz][kolumna] = rand_wartosc;                                                            // jesli spełnia wartosc zostaje wpisana w pole
				licznik = 0;

			} else if (licznik == 20) {                                                            //jeśli po 20 razach nie udało się znalezc cyfry ktora by pasowala do danego pola
				cofnij_o_jeden(tab, tab_wartosci, pomoc, wiersz, kolumna, wymiar);                                                            //zostaje wywolana funkcja cofnięcia się o jedną kolumnę do tyłu
				licznik = 0;
			} else {                                                            //podana wartosc nie spelnila wszystkich warunków zatem powtarzamy krok
				kolumna--;
				licznik++;
			}

		}
	}

}
