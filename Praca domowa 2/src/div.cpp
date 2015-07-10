/*
 * div.cpp
 *
 *  Created on: 10 lip 2015
 *      Author: Artur
 */

#include "header.h"


int div(int dzielna, int dzielnik, int *reszta) {

	if (dzielnik == 0) { 										// sprawdzenie czy użytkownik nie podał dzielnika = 0
		cout << "Nie dzieli się przez 0 !!!";
		return 0; 												// zakończenie działania funkcji, aby nie wykonało się dzielenie przez 0
	} else {
		*reszta = dzielna % dzielnik;							// obliczenie i zapisanie do zmiennej reszty z dzielenia
	}
	return (dzielna / dzielnik); 								// obliczenie wyniku dzielenia i wysłanie jej jako całkowitoliczbową
}

