//============================================================================
// Name        : Sudoku_PD3.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "header.h"

using namespace std;

int main() {

	int wymiar_planszy;
	int kolumna = 0;
	int wiersz = 0;
	int wartosc_pola = 0;
	int ile_pol_na_start = 0;
	int ilosc_pustych_pol = 0;

	cout << "Podaj rozmiar boku planszy." << endl;
	cin >> wymiar_planszy;

	do {
		ilosc_pustych_pol = wymiar_planszy * wymiar_planszy;
		cout << "Ile pól mam losowo wypełnic na start ?" << endl;
		cin >> ile_pol_na_start;
		ilosc_pustych_pol -= ile_pol_na_start;
	} while (ilosc_pustych_pol <= 0);

	int **plansza = new int*[wymiar_planszy];                                                            //tworzenie tablicy dwuwymiarowej o podanej wielkosci
	for (int i = 0; i < wymiar_planszy; i++) {
		plansza[i] = new int[wymiar_planszy];
	}

	for (int i = 0; i < wymiar_planszy; i++) {                                                            //wyzerowanie całej tablicy
		for (int j = 0; j < wymiar_planszy; j++) {
			plansza[i][j] = 0;
		}
	}

	losowe_zapelnienie(plansza, wymiar_planszy, ile_pol_na_start, wiersz, kolumna);

	cout << "Plansza zapelniona" << endl;
	wyswietlenie_planszy(plansza, wymiar_planszy);

	while (ilosc_pustych_pol) {
		cout << "Podaj numer kolumny" << endl;                                                            //Wprowadzenie danych przez uzytkownika
		cin >> kolumna;
		kolumna--;
		cout << "Podaj numer wiersza" << endl;
		cin >> wiersz;
		wiersz--;
		cout << "Podaj wartosc, którą chcesz wpisac" << endl;
		cin >> wartosc_pola;

		if (plansza[wiersz][kolumna] != 0) {                                                            //sprawdzenie czy uzytkownik nie chce zmienic juz zapisanego pola
			cout << "To pole już ma wartosc!!! Wybierz inne pole." << endl;
			continue;
		}

		if (sprawdzenie_wiersza(plansza, wymiar_planszy, wartosc_pola, wiersz)) {                                                            //sprawdzenie czy nie występuje kolflikt w wierszu
			if (sprawdzenie_kolumny(plansza, wymiar_planszy, wartosc_pola, kolumna)) {                                                            //sprawdzenie czy nie występuje konflikt w kolumnie
				if (wymiar_planszy == 9
						&& sprawdzenie_malego_kwadratu(plansza, wymiar_planszy,
								wartosc_pola, kolumna, wiersz)) {                                                            //sprawdzenie czy w malym kwadracie nie wystepuje konflikt - tylko dla planszy 9x9
					cout << "Nanoszę wartosc na planszę." << endl;
					plansza[wiersz][kolumna] = wartosc_pola;                                                            //naniesienie wartosci na wyznaczone pole planszy
					ilosc_pustych_pol--;
				} else if (wymiar_planszy == 9) {                                                            //jesli w malym kwadracie wystąpi konflikt a plansza ma wymiar 9x9
					cout << "Cyfra " << wartosc_pola
							<< " już występuje w małym kwadracie!!!" << endl;
				} else {
					cout << "Nanoszę wartosc na planszę." << endl;
					plansza[wiersz][kolumna] = wartosc_pola;                                                            //naniesienie wartosci na wyznaczone pole planszy
					ilosc_pustych_pol--;

				}
			} else {
				cout << "Cyfra " << wartosc_pola << " już występuje w danej kolumnie!!!"
						<< endl;
			}
		} else {
			cout << "Cyfra " << wartosc_pola << " już występuje w danym wierszu!!!"
					<< endl;
		}

		cout << '\n' << '\n' << "Wyświetlenie planszy" << '\n' << endl;

		wyswietlenie_planszy(plansza, wymiar_planszy);
	}

	return 0;
}
