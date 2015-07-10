//============================================================================
// Name        : Praca.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

using namespace std;

int main() {
	int liczba_uzytkownika = 0;

	cout << "Podaj liczbę" << endl;
	cin >> liczba_uzytkownika;

	cout << "Oto najbliższa liczba podzielna przez 3:" << endl;
	if (liczba_uzytkownika % 3 == 1) {
		cout << --liczba_uzytkownika << endl;
	} else if (liczba_uzytkownika % 3 == 2) {
		cout << ++liczba_uzytkownika << endl;
	} else {
		cout << "Podałeś liczbę podzielną przez 3! Jest nią:" << liczba_uzytkownika << endl;
	}

	return 0;
}
