/*
 * przecinki_na_kropki.cpp
 *
 *  Created on: 10 lip 2015
 *      Author: Artur
 */

#include "header.h"

void przecinki_na_kropki(string &linia) {

	int zmienna_poelementowa = 0;                                                            // fragment kodu odpowiadający za zamianę przecinka na kropkę

	while ((int) linia[zmienna_poelementowa] != 0) {										//dziala dopóki nie natrafi na znak /n
		if ((int) linia[zmienna_poelementowa] == 44) {										//jesli dany znak jest równy 44 to znaczy że jest to przecinek
			int buffor = (int) linia[zmienna_poelementowa] + 2;								//zwiększenie wartości o dwa aby zamienic przecinek na kropkę w kodzie ascii
			linia[zmienna_poelementowa] = (char) buffor;
		}
		zmienna_poelementowa++;
	}
}

