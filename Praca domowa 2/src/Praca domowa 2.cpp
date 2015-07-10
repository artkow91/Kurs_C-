//============================================================================
// Name        : Praca.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <sstream>
#include <string>
//#include "minmax.h"
//#include "swap.h"
//#include "sort.h"
#include "header.h"

using namespace std;

int main() {

	int wybor_uzytkownika = -1;
	int koniec = 0;
	/*
	 do {
	 cout << "Jaką funkcję chcesz sprawdzic?" << endl;
	 cout
	 << "1: minmax     2: swap     3: sortowanie     4: dzielenie     0: koniec"
	 << endl;
	 cin >> wybor_uzytkownika;

	 if (wybor_uzytkownika == 0) {

	 koniec++;

	 } else if (wybor_uzytkownika == 1) {

	 int a, b, c;									// funkcja minmax
	 cout << "Podaj po kolei 3 liczby." << endl;
	 cin >> a >> b >> c;
	 minmax(a, b, c);
	 wybor_uzytkownika = -1;

	 } else if (wybor_uzytkownika == 2) {

	 int liczba1, liczba2;								// funkcja swap
	 cout << "Podaj dwie liczby." << endl;
	 cin >> liczba1 >> liczba2;
	 swap(liczba1, liczba2);
	 cout << liczba1 << " " << liczba2 << endl;
	 wybor_uzytkownika = -1;

	 } else if (wybor_uzytkownika == 3) {

	 int tab[] = { 0, 0, 0, 0 };					// funkcja sortowania
	 int ilosc_podanych_liczb;
	 string wejscie, smieci;
	 cout << "Podaj liczby (od 2 do 4) do posortowania:" << endl;
	 getline(cin, smieci);											//pozbycie się /n ze strumienia wejsciowego pozostawionego po cin>>,
	 getline(cin, wejscie);											//co pozwala na ponowne wprowadzenie danych
	 ilosc_podanych_liczb = sort(wejscie, tab);						//przy użyciu funkcji getline()
	 for (int i = 0; i < ilosc_podanych_liczb; i++) {
	 cout << tab[i] << " ";
	 }
	 cout << endl;
	 wybor_uzytkownika = -1;

	 } else if (wybor_uzytkownika == 4) {

	 int dzielna;									// funkcja dzielenia
	 int dzielnik;
	 int wynik;
	 int reszta;

	 cout << "Proszę podac dzielną:" << endl;
	 cin >> dzielna;
	 cout << "Proszę podac dzielnik: " << endl;
	 cin >> dzielnik;

	 wynik = div(dzielna, dzielnik, &reszta);
	 if (dzielnik != 0) {
	 cout << "Wynik dzielenia= " << wynik << " z resztą = "
	 << reszta;
	 }
	 wybor_uzytkownika = -1;

	 } else {

	 cout << "Nie wybrałeś żadnej opcji!" << endl;

	 }
	 } while (koniec == 0);
	 */

	do {
		cout << "Jaką funkcję chcesz sprawdzic?" << endl;
		cout
				<< "1: minmax     2: swap     3: sortowanie     4: dzielenie     0: koniec"
				<< endl;
		cin >> wybor_uzytkownika;

		switch (wybor_uzytkownika) {

		case 0:
			cout << "Do zobaczenia!!!" << endl;
			koniec++;
			break;

		case 1: {
			int a, b, c;                                                            // funkcja minmax
			cout << "Podaj po kolei 3 liczby." << endl;
			cin >> a >> b >> c;
			minmax(a, b, c);                                                            //wywolanie funkcji
			break;
		}
		case 2: {
			int liczba1, liczba2;                                                            // funkcja swap
			cout << "Podaj dwie liczby." << endl;
			cin >> liczba1 >> liczba2;
			swap(liczba1, liczba2);                                                            //wywołanie funkcji
			cout << liczba1 << " " << liczba2 << endl;
			break;
		}
		case 3: {
			int tab[] = { 0, 0, 0, 0 };                                                            // funkcja sortowania
			int ilosc_podanych_liczb = 4;
			string wejscie, smieci;
			cout << "Podaj liczby (od 2 do 4) do posortowania:" << endl;
			getline(cin, smieci);                                                            // pozbycie się /n ze strumienia wejsciowego pozostawionego po cin>>,
			getline(cin, wejscie);                                                            // co pozwala na ponowne wprowadzenie danych
			ilosc_podanych_liczb = sort(wejscie, tab);                                                            // przy użyciu funkcji getline()
			for (int i = 0; i < ilosc_podanych_liczb; i++) {
				cout << tab[i] << " ";
			}
			cout << endl;
			break;
		}
		case 4: {
			int dzielna;                                                            // funkcja dzielenia
			int dzielnik;
			int wynik;
			int reszta;

			cout << "Proszę podac dzielną:" << endl;
			cin >> dzielna;
			cout << "Proszę podac dzielnik: " << endl;
			cin >> dzielnik;

			wynik = div(dzielna, dzielnik, &reszta);
			if (dzielnik != 0)                                                            //sprawdzenie czy uzytkownik nie chce dzielic przez 0
					{
				cout << "Wynik dzielenia= " << wynik << " z resztą = " << reszta
						<< endl;
			}
			break;
		}
		default:
			cout << "Nie wybrałeś żadnej opcji!" << endl;
			wybor_uzytkownika = -1;
			break;
		}
	} while (koniec == 0);                                                            //zapetlony program dopóki nie zostanie wybrana opcja "0"

	return 0;
}
