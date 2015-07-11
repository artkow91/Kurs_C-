/*
 * header.h
 *
 *  Created on: 11 lip 2015
 *      Author: Artur
 */

#ifndef HEADER_H_
#define HEADER_H_
#include <iostream>
using namespace std;

bool sprawdzenie_wiersza(int** tab, int wymiar, int wpisywana_wartosc, int wiersz);

bool sprawdzenie_kolumny(int** tab, int wymiar, int wpisywana_wartosc, int wiersz);

bool sprawdzenie_malego_kwadratu(int** tab, int wymiar, int wpisywana_wartosc, int kolumna, int wiersz);



#endif /* HEADER_H_ */
