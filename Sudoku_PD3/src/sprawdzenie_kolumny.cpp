/*
 * sprawdzenie_kolumny.cpp
 *
 *  Created on: 11 lip 2015
 *      Author: Artur
 */

#include "header.h"

bool sprawdzenie_kolumny(int** tab, int wymiar, int wpisywana_wartosc, int kolumna) {

	for (int i = 0; i < wymiar; i++) {
		if (tab[i][kolumna] == wpisywana_wartosc) {
			return false;
		}
	}

	return true;
}

