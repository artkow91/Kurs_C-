/*
 * losowe_zapelnienie.cpp
 *
 *  Created on: 12 lip 2015
 *      Author: Artur
 */

#include "header.h"

void losowe_zapelnienie(int** tab, int wymiar, int ile_pol, int wiersz, int kolumna) {
	srand(time(NULL));

	int tablica_pomoc[][10] = { { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } };
	int pomoc = 0;
	cout << "zaczynam losowanie" << endl;
	for (int i = 0; i < wymiar; i++) {
		for (int j = 0; j < wymiar; j++) {

			int rand_wartosc = (rand() % wymiar) + 1;
			int flag = 0;
			int limit_prob = 0;
			int buffor_wartosci;

			while (1) {
				cout << '\t' << (sprawdzenie_wiersza(tab, wymiar, rand_wartosc, i))
						<< '\t' << (sprawdzenie_kolumny(tab, wymiar, rand_wartosc, j))
						<< endl;
				if (sprawdzenie_wiersza(tab, wymiar, rand_wartosc, i)
						&& sprawdzenie_kolumny(tab, wymiar, rand_wartosc, j)) {
					cout << "Spełniony warunek1" << endl;

					for (int j = 0; j < 10; j++) {
						tablica_pomoc[0][j] = 0;
					}
					pomoc = 0;
					tab[i][j] = rand_wartosc;

//					if (wymiar == 9
//							&& sprawdzenie_malego_kwadratu(tab, wymiar, rand_wartosc, j,
//									i)) {
//						cout << "Spełniony warunek"<< endl;
//						break;
//
//					} else {
//						rand_wartosc = (rand() % wymiar) + 1;
//					}

					break;

				} else {
					cout << limit_prob << '\t' << rand_wartosc << '\t' << i << '\t' << j
							<< endl;
					if (limit_prob == 20 && !flag) {
						rand_wartosc = 1;
						limit_prob = 0;
						flag = 1;
					} else if (rand_wartosc == 9 && flag) {

						cout << '\t' << "Cofam o jeden" << endl;

						j--;

						if (j < 0) {
							i--;
							j = 8;
						}

						if (tab[i][j] >= 9) {
							tab[i][j] = 0;
						}

						tablica_pomoc[0][pomoc] = tab[i][j];
						pomoc++;
						buffor_wartosci = (++tab[i][j]);
						tab[i][j] = 0;
						int counter = 0;

						while (1) {
							cout << "Petla" << endl;
							cout << '\t'
									<< (sprawdzenie_wiersza(tab, wymiar, buffor_wartosci,
											i)) << '\t'
									<< (sprawdzenie_kolumny(tab, wymiar, buffor_wartosci,
											j)) << endl;
							if (sprawdzenie_wiersza(tab, wymiar, buffor_wartosci, i)
									&& sprawdzenie_kolumny(tab, wymiar, buffor_wartosci,
											j) && (buffor_wartosci < 10)
									&& sprawdzenie_wiersza(tablica_pomoc, wymiar,
											buffor_wartosci)) {
								tab[i][j] = buffor_wartosci;
								break;
							} else {
								buffor_wartosci++;
								if (buffor_wartosci > 9) {
									buffor_wartosci = 1;
								}
							}

							if (counter >= 11) {
								j--;
								if (j < 0) {
									i--;
									j = 8;
								}

//								while (tab[i][j] >= 9) {
//									tab[i][j] = 0;
//									j--;
//									cout << "Cofam o kolejny" << endl;
//									if (j < 0) {
//										i--;
//										j = 8;
//									}
//								}

								if (tab[i][j] >= 9) {
									tab[i][j] = 0;
								}

								buffor_wartosci = (++tab[i][j]);
								tab[i][j] = 0;
								counter = 0;
							}
							counter++;
						}

						cout << "BREAK" << '\t' << i << '\t' << j << '\t' << tab[i][j]
								<< endl;
						break;
					} else if (flag) {
						rand_wartosc++;
						limit_prob++;
					} else {
						rand_wartosc = (rand() % wymiar) + 1;
						limit_prob++;
					}
				}

			}
			cout << endl;
			cout << endl;
			cout << endl;
			cout << endl;
			wyswietlenie_planszy(tab, wymiar);
		}
	}
}
