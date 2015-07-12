/*
 * wyswietlenie_planszy.cpp
 *
 *  Created on: 12 lip 2015
 *      Author: Artur
 */

#include "header.h"

void wyswietlenie_planszy(int** tab, int wymiar) {

	cout << endl;

	for (int i = 0; i < wymiar; i++) {
		for (int j = 0; j < wymiar; j++) {
			cout << tab[i][j] << "  ";
			if ((j % 3) == 2 && wymiar == 9) {
				cout << "  ";
			}
		}
		cout << endl;
		if ((i % 3) == 2 && wymiar == 9) {
			cout << endl;
		}
	}
}

