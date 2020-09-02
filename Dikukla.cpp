/*
 * Dikukla.cpp
 *
 */

#include "Dikukla.h"


Dikukla::Dikukla() { }

Dikukla::Dikukla(const string &arp, time_t tei, time_t tex, int ei, int ex):Oximata(arp, tei, tex, ei, ex) {

}

Dikukla::~Dikukla() {

}

double Dikukla::poso() const {
		return Oximata::getExodos() - Oximata::getEisodos() * XREWSH;
}
