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

		cin >> dzialanie;                                                            //przypisanie wybranego przez uzytkownika dzialania do zmiennej

		if (dzialanie != "koniec") {                                                            //sprawdzenie czy użytkownik nie chce zakończyc programu
			cout
					<< "Proszę podac dwie liczby, na których zostanie wykonane wybrane działanie. W celu wpisania liczby z ułamkiem dziesiętnym proszę użyc kropki(.)"
					<< endl;
			cin >> liczba1 >> liczba2;
		}

		if (dzialanie == "dodawanie") {                                                            //wybór odpowiedniego dzialania
			cout << "Wynik = " << dodawanie(liczba1, liczba2) << endl;
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

