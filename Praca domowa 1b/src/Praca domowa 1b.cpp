//============================================================================
// Name        : Praca.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

bool funkcja(int liczba, int wzor);

int main() {

	int liczbaGracza = 0;

	srand(time(NULL));
	unsigned short wylosowanaLiczba = rand() % 11;
	cout
			<< "Właśnie wyslosowałem liczbe z zakresu 1-10. Spróbuj zgadnąc co to za liczba :)"
			<< endl;

//	for (int nrProby = 1; nrProby < 5; nrProby++) {
//		cout << "Próba numer:" << nrProby << endl;
//		cin >> liczbaGracza;
//		if (liczbaGracza > wylosowanaLiczba) {
//			cout << "Za dużo! Spróbuj jeszcze raz!" << endl;
//		} else if (liczbaGracza < wylosowanaLiczba) {
//			cout << "Za mało! Spróbuj jeszcze raz!" << endl;
//		} else {
//			cout
//					<< "GRATULACJE! Udało Ci się zgadnąc jaką liczbę wylowowałem po "
//					<< nrProby << "próbach" << endl;
//			break;
//		}
//	}





//------------------------ DRUGI SPOSÓB	----------------------------------------------------


	int proba = 1;
	bool statusGry = true;

	do {
//		bool statusGry = true;
		cin >> liczbaGracza;
		cout << "Próba numer: " << proba << endl;
		statusGry = funkcja(liczbaGracza, wylosowanaLiczba);
		proba++;
	} while ((proba <= 4) && (statusGry == true));
	return 0;
}

bool funkcja(int liczba, int wzor) {

	if (liczba > wzor) {
		cout << "Za dużo" << endl;
		return true;
	} else if (liczba < wzor) {
		cout << "Za mało" << endl;
		return true;
	} else {
		cout << "Zgadza się!" << endl;
		return false;
	}

}
