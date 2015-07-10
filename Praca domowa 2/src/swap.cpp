/*
 * swap.cpp
 *
 *  Created on: 9 lip 2015
 *      Author: Artur
 */

#include "header.h"

void swap(int &jeden, int &dwa) {
	int pomocnicza = jeden;		// inicjalizacja zmiennej pomocniczej
	jeden = dwa;
	dwa = pomocnicza;
}
