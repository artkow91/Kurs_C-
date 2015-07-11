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
			return false;
		}
	}

	return true;
}

