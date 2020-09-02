/*
 * Varia.cpp
 *
 */

#include "Varia.h"


Varia::Varia() {}


Varia::Varia(const string &arp, time_t tei, time_t tex, int ei, int ex):Oximata(arp, tei, tex, ei, ex) {

}

Varia::~Varia() {

}

double Varia::poso() const {
	return Oximata::getExodos() - Oximata::getEisodos() * XREWSH;
}
