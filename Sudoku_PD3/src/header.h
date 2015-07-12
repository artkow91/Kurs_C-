/*
 * header.h
 *
 *  Created on: 11 lip 2015
 *      Author: Artur
 */

#ifndef HEADER_H_
#define HEADER_H_

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

void wyswietlenie_planszy(int** tab, int wymiar);

bool sprawdzenie_wiersza(int** tab, int wymiar, int wpisywana_wartosc, int wiersz);

bool sprawdzenie_wiersza(int tab[][10], int wymiar, int wpisywana_wartosc, int wiersz,
		int kolumna);

bool sprawdzenie_kolumny(int** tab, int wymiar, int wpisywana_wartosc, int wiersz);

bool sprawdzenie_malego_kwadratu(int** tab, int wymiar, int wpisywana_wartosc,
		int kolumna, int wiersz);

void losowe_zapelnienie(int** tab, int wymiar);

void cofnij_o_jeden(int ** tab, int tab_wartosci[][10], int &pomoc, int &wiersz,
		int &kolumna, int wymiar);

#endif /* HEADER_H_ */
