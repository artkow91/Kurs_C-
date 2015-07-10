//============================================================================
// Name        : Kalkulator_PD2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include <sstream>
#include "header.h"

using namespace std;

int main() {

	float tab_zmiennych[] = { 0, 0 };
	string dzialanie;
	string linia_wejsciowa;
	string smieci;

	do {

		cout << "Proszę wybrac działanie:" << endl;
		cout << "dodawanie     odejmowanie     mnożenie     dzielenie     koniec" << endl;

		cin >> dzialanie;                                                            //przypisanie wybranego przez uzytkownika dzialania do zmiennej
		getline(cin, smieci);
		if (dzialanie != "koniec") {                                                            //sprawdzenie czy użytkownik nie chce zakończyc programu
			cout
					<< "Proszę podac dwie liczby, na których zostanie wykonane wybrane działanie."
					<< endl;
			getline(cin, linia_wejsciowa);                                                            //przechwycenie wprowadzonej lini
			przecinki_na_kropki(linia_wejsciowa);                                                            //zamienienie przecinków na kropki jesli jakies uzytkownik wprowadził
			rozdzielenie_na_zmienne(linia_wejsciowa, tab_zmiennych);                                                            //podzielenie calej lini na dwie zmienne i przypisanie ich do tablicy zmiennych
		}

		if (dzialanie == "dodawanie") {                                                            //wybór odpowiedniego dzialania
			cout << "Wynik dodawania = " << dodawanie(tab_zmiennych[0], tab_zmiennych[1])
					<< endl;
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

