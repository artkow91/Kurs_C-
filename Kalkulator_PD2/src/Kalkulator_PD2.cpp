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
	cout << "Proszę wybrac działanie:" << endl;
	cout << "dodawanie     odejmowanie     mnożenie     dzielenie" << endl;

	cin >> dzialanie;

	cout << "Proszę podac dwie liczby, na których zostanie wykonane wybrane działanie." << endl;

	if(dzialanie == "dodawanie"){

	}else if(dzialanie == "odejmowanie"){

	}else if(dzialanie == "mnożenie"){

	}else if(dzialanie == "dzielenie"){

	}else{
		cout << "Nie została wybrana żadna opcja (ewentualnie nastąpił błąd w pisowni)." << endl;
		cout << "Spróbuj jeszcze raz!" << endl;
	}
	return 0;
}

