//============================================================================
// Name        : Sudoku_PD3.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "header.h"

using namespace std;

int main() {

	int wymiar_planszy;
	int kolumna = 0;
	int wiersz = 0;
	int wartosc_pola = 0;
	int ile_pol_na_start = 0;
	int ilosc_pustych_pol = 0;
	string czy_losowac;

	cout << "Podaj rozmiar boku planszy." << endl;
	cin >> wymiar_planszy;
	ilosc_pustych_pol = wymiar_planszy * wymiar_planszy;
	cout << "Wymiar planszy wynosi: " << wymiar_planszy << "x" << wymiar_planszy << endl;

	int **plansza = new int*[wymiar_planszy];                                                            //tworzenie tablicy dwuwymiarowej o podanej wielkosci
	int **plansza_rozw = new int*[wymiar_planszy];
	for (int i = 0; i < wymiar_planszy; i++) {
		plansza[i] = new int[wymiar_planszy];
		plansza_rozw[i] = new int[wymiar_planszy];
	}

	for (int i = 0; i < wymiar_planszy; i++) {                                                            //wyzerowanie całej tablicy
		for (int j = 0; j < wymiar_planszy; j++) {
			plansza[i][j] = 0;
			plansza_rozw[i][j] = 0;
		}
	}

	cout << "Czy mam losowo zapelnic planszę? (Tak/Nie)" << endl;                                                            //spytanie sie czy wypelnic losowo plansze
	cin >> czy_losowac;
	if (czy_losowac == "Tak" || czy_losowac == "tak" || czy_losowac == "TAK") {
		do {
			cout << "Ile pól mam losowo wypełnic na start ?" << endl;
			cin >> ile_pol_na_start;
		} while (ile_pol_na_start > ilosc_pustych_pol);

		losowe_zapelnienie(plansza, plansza_rozw, wymiar_planszy);                                                            //losowe zapelnienie calej tablicy
		ilosc_pustych_pol -= ile_pol_na_start;
		ile_pol_na_start = ilosc_pustych_pol;

		while (ile_pol_na_start != 0) {                                                            //zostawienie tylko tyle zapełnioncyh pol ile chce uzytkownik
			int rand_kolumna = rand() % wymiar_planszy;
			int rand_wiersz = rand() % wymiar_planszy;
			if (plansza[rand_wiersz][rand_kolumna] != 0) {
				plansza[rand_wiersz][rand_kolumna] = 0;
				ile_pol_na_start--;
			}
		}

		cout << "Plansza wypelniona" << endl;
	}

	wyswietlenie_planszy(plansza, wymiar_planszy);

	while (1) {

		cout << "Podaj numer wiersza" << endl;                                                            //Wprowadzenie danych przez uzytkownika
		cin >> wiersz;
		wiersz--;
		cout << "Podaj numer kolumny" << endl;
		cin >> kolumna;
		kolumna--;
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
		if (ilosc_pustych_pol) {
			cout << "Grasz dalej ? (Tak/Nie)" << endl;
			string czy_dalej;
			cin >> czy_dalej;

			if (czy_dalej == "Nie" || czy_dalej == "nie" || czy_dalej == "NIE") {
				if (plansza_rozw[0][0] != 0) {
					cout << "Oto poprawnie rozwiązana plansza" << endl;
					wyswietlenie_planszy(plansza_rozw, wymiar_planszy);
				}
				break;
			}
		}else{
			break;
		}
	}

	if (!ilosc_pustych_pol) {
		cout << endl;
		cout << "Wypeniles poprawnie cala planszę. Gratuluje!" << endl;
	}
	return 0;
}
