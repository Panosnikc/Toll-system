/*
 * Autokinitodromos.h
 *
 */

#ifndef AUTOKINITODROMOS_H_
#define AUTOKINITODROMOS_H_
#include <iostream>
#include <string>
#include <vector>
#include "Oximata.h"

using namespace std;

class Autokinitodromos {
public:
	Autokinitodromos();
	void addOximata(Oximata*); // add vehicle
	void deleteOximata(string&); // delete vehicle
	Oximata *findOximata(string&); // find vehicle
	int totaloximata();
	virtual ~Autokinitodromos();
private:
	vector<Oximata*> *autokinitodromos; // pointer type autokinitodromos in a vector where save a vector pointer type oxhmima

};

#endif /* AUTOKINITODROMOS_H_ */
