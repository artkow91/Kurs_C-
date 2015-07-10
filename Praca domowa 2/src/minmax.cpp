/*
 * minmax.cpp
 *
 *  Created on: 9 lip 2015
 *      Author: Artur
 */

#include "header.h"

void minmax(int pierwsza, int druga, int trzecia) {

	if ((pierwsza < druga) && (pierwsza < trzecia)) {
		cout << "Wartośc MIN= " << pierwsza << endl;
		if (druga > trzecia) {
			cout << "Wartosc MAX= " << druga << endl;
		} else {
			cout << "Wartosc MAX= " << trzecia << endl;
		}
	} else if (druga < pierwsza && druga < trzecia) {
		cout << "Wartośc MIN= " << druga << endl;
		if (pierwsza > trzecia) {
			cout << "Wartosc MAX= " << pierwsza << endl;
		} else {
			cout << "Wartosc MAX= " << trzecia << endl;
		}
	} else {
		cout << "Wartośc MIN= " << trzecia << endl;
		if (pierwsza > druga) {
			cout << "Wartosc MAX= " << pierwsza << endl;
		} else {
			cout << "Wartosc MAX= " << druga << endl;
		}
	}
}

