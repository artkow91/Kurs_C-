/*
 * sort.cpp
 *
 *  Created on: 9 lip 2015
 *      Author: Artur
 */

#include "header.h"
#include <sstream>

int sort(string wejscie, int tab[]) {

	int ilosc_podanych_liczb = 0;
	int n;
	int swap_number;

	istringstream is(wejscie);

	while (is >> n) {
		tab[ilosc_podanych_liczb] = n;
		ilosc_podanych_liczb++;
	}

	switch (ilosc_podanych_liczb) {

	case 2:
		if (tab[0] > tab[1]) {
			swap(tab[0], tab[1]);
		}
		break;
	case 3:
		do {
			swap_number = 0;
			for (int i = 0; i < 2; i++) {
				if (tab[i] > tab[i + 1]) {
					swap(tab[i], tab[i + 1]);
					swap_number++;
				}
			}
		} while (swap_number != 0);
		break;
	case 4:
		do {
			swap_number = 0;
			for (int i = 0; i < 3; i++) {
				if (tab[i] > tab[i + 1]) {
					swap(tab[i], tab[i + 1]);
					swap_number++;
				}
			}
		} while (swap_number != 0);
		break;
	}
	return ilosc_podanych_liczb;
}

