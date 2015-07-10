//============================================================================
// Name        : Kalkulator_PD2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include "header.h"

using namespace std;

int main() {

	float liczba1 = 0;
	float liczba2 = 0;
	string dzialanie;

	do {

		cout << "Proszę wybrac działanie:" << endl;
		cout
				<< "dodawanie     odejmowanie     mnożenie     dzielenie     koniec"
				<< endl;

		cin >> dzialanie;

		if (dzialanie != "koniec") {
			cout
					<< "Proszę podac dwie liczby, na których zostanie wykonane wybrane działanie."
					<< endl;
		}
		if (dzialanie == "dodawanie") {

		} else if (dzialanie == "odejmowanie") {

		} else if (dzialanie == "mnożenie") {

		} else if (dzialanie == "dzielenie") {

		} else if (dzialanie != "koniec") {
			cout
					<< "Nie została wybrana żadna opcja (ewentualnie nastąpił błąd w pisowni)."
					<< endl;
			cout << "Spróbuj jeszcze raz!" << endl;
		}
	} while (dzialanie != "koniec");

	cout << "Do zobaczenia !!!" << endl;

	return 0;
}

