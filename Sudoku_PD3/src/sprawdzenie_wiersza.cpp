/*
 * sprawdzenie_wiersza.cpp
 *
 *  Created on: 11 lip 2015
 *      Author: Artur
 */

#include "header.h"

bool sprawdzenie_wiersza(int** tab, int wymiar, int wpisywana_wartosc, int wiersz) {

	for (int i = 0; i < wymiar; i++) {
		if (tab[wiersz][i] == wpisywana_wartosc) {
			return false;                                                            //dana wartosc jest już w podanym wierszu
		}
	}
	return true;                                                            // danej wartosci nie ma w podanym wierszu
}

bool sprawdzenie_wiersza(int tab[][10], int wymiar, int wpisywana_wartosc, int wiersz,
		int kolumna) {                                                            //przeladowanie funkcji aby sprawdzala tablicę czy
																				  //czy dana wartosc juz nie byla wpisywana w dane pole -- wedlug Backtracking algoritm
	for (int i = 0; i < wymiar; i++) {
		if (tab[(wiersz * 9) + kolumna][i] == wpisywana_wartosc) {
			return false;
		}
	}

	return true;
}
