/*
 * Dikukla.h
 *
 */

#ifndef DIKUKLA_H_
#define DIKUKLA_H_
#include "Oximata.h"



class Dikukla:public Oximata {
public:
	Dikukla();
	Dikukla(const string &, time_t, time_t, int, int);
	double poso() const;
	virtual ~Dikukla();
	static const double XREWSH = 0.04;
};


#endif /* DIKUKLA_H_ */
