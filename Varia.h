/*
 * Varia.h
 *
 */

#ifndef VARIA_H_
#define VARIA_H_
#include "Oximata.h"



class Varia:public Oximata {
public:
	Varia();
	Varia(const string &, time_t, time_t, int, int);
	double poso() const;
	virtual ~Varia();
	static const double XREWSH = 0.10;

};


#endif /* VARIA_H_ */
