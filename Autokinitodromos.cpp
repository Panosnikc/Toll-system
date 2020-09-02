/*
 * Autokinitodromos.cpp
 *
 */

#include "Autokinitodromos.h"

Autokinitodromos::Autokinitodromos() {
	autokinitodromos = new vector<Oximata*>; // Create an object vector, pointer type Oximata
}

Autokinitodromos::~Autokinitodromos() {
	autokinitodromos->empty();
	delete autokinitodromos;
}

void Autokinitodromos::addOximata(Oximata *o) {
	autokinitodromos-> push_back(o); // Push the object autokinitodromos from the back vector
}

void Autokinitodromos::deleteOximata(string &ar_pinakidas) {
	for(vector<Oximata*>::iterator it = autokinitodromos-> begin(); it != autokinitodromos-> end(); it++) {
			if(ar_pinakidas.compare((*it)->getar_pinakidas() ) == 0) {
					autokinitodromos-> erase(it);
					cout << "The vehicle has been deleted." << endl;
					break;
				}
		}
}

Oximata* Autokinitodromos::findOximata(string &ap) {
	string ar_pinakidas = ap;
	int z = 0;
		while(1) {
			for(vector<Oximata*>::iterator it = autokinitodromos-> begin(); it != autokinitodromos-> end(); it++) {
					if(ar_pinakidas.compare((*it)-> getar_pinakidas()) == 0) {
							return *it; // return a pointer type tupou Oximata
							z = 1;
							break;
						}
				}
					if (z == 1)
						break;
					else {
						system("cls");
						cout << "The plate number you you have entered not found: " << endl << endl << endl;
						system("pause");
						system("cls");
						cout << "Please enter a valid plate number: " << endl;
						cin >> ar_pinakidas;
						continue;
					}
		}
		return 0;
}

int Autokinitodromos::totaloximata() {
	return autokinitodromos->size();
}

