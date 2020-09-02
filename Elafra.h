/*
 * Elafra.h
 *
 */

#ifndef ELAFRA_H_
#define ELAFRA_H_
#include "Oximata.h"


class Elafra:public Oximata {
public:
	Elafra();
	Elafra(const string &, time_t, time_t, int, int);
	double poso() const;
	virtual ~Elafra();
	static const double XREWSH = 0.07;
};

#endif /* ELAFRA_H_ */
