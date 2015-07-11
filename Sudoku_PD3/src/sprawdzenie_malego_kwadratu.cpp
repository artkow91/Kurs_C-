/*
 * sprawdzenie_malego_kwadratu.cpp
 *
 *  Created on: 11 lip 2015
 *      Author: Artur
 */

#include "header.h"

bool sprawdzenie_malego_kwadratu(int** tab, int wymiar, int wpisywana_wartosc,
		int kolumna, int wiersz) {

	int nr_kwadratu_pion = wiersz / 3;                                                            //podzielenie obszaru na 9 mniejszych kwadratów i sprawdzenie w ktorym kwadracie jestesmy obecnie
	int nr_kwadratu_poziom = kolumna / 3;                                                            //0,0 oznacza gorny lewy kwadrat

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (tab[i+(3*nr_kwadratu_pion)][j+(3*nr_kwadratu_poziom)] == wpisywana_wartosc) {
				return false;
			}
		}
	}
	return true;
}

