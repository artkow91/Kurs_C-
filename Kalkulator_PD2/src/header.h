/*
 * header.h
 *
 *  Created on: 10 lip 2015
 *      Author: Artur
 */

#ifndef HEADER_H_
#define HEADER_H_
#include <iostream>
#include <string>

using namespace std;

float dodawanie(float a, float b);

float odejmowanie(float a, float b);

float mnozenie(float a, float b);

float dzielenie(float a, float b);

void przecinki_na_kropki(string &linia);

void rozdzielenie_na_zmienne(string &linia, float tab[]);

#endif /* HEADER_H_ */
