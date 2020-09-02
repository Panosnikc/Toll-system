/*
 * Elafra.cpp
 *
 */

#include "Elafra.h"


Elafra::Elafra() {}


Elafra::Elafra(const string &arp, time_t tei, time_t tex, int ei, int ex):Oximata(arp, tei, tex, ei, ex) {
	
}

Elafra::~Elafra() {

}

double Elafra::poso() const {
	return Oximata::getExodos() - Oximata::getEisodos() * XREWSH;
}
