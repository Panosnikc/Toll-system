/*
 * Oximata.cpp
 *
 */

#include "Oximata.h"

Oximata::Oximata() {
	eisodos = 0;
	exodos = 0;
	enter_time = time(0);
	exit_time = time(0);
}

Oximata::Oximata(const string &arp, time_t tei, time_t tex, int ei, int ex) {
	ar_pinakidas = arp;
	enter_time = tei;
	exit_time = tex;
	eisodos = ei;
	exodos = ex;
}

Oximata::~Oximata() {

}


void Oximata::setar_pinakidas(const string &arp) {
	ar_pinakidas = arp;
}

string Oximata::getar_pinakidas() const {
	return ar_pinakidas;
}

void Oximata::setEisodos(int ei) {
	eisodos = ei;
}

int Oximata::getEisodos() const {
	return eisodos;
}

void Oximata::setExodos(int ex) {
	exodos = ex;
}

int Oximata::getExodos() const {
	return exodos;
}

void Oximata::setEnter_time() {
	enter_time = time(0);
}

string Oximata::getEnter_time() const {
	struct tm *now = localtime(&enter_time);
	return asctime(now);
}

void Oximata::setExit_time() {
	exit_time = time(0);
}

string Oximata::getExit_time() const {
	struct tm *now = localtime(&exit_time);
	return asctime(now);
}

int apostash(int eis, int ex) {
		switch(eis)
		{
		case 1:
			switch(ex)
			{
			case 2:
				return Oximata::EXODOS_2-Oximata::EISODOS_1;
				break;
			case 3:
				return Oximata::EXODOS_3-Oximata::EISODOS_1;
				break;
			case 4:
				return Oximata::EXODOS_4-Oximata::EISODOS_1;
				break;
			}
			break;
		case 2:
			switch(ex)
			{
			case 1:
				return Oximata::EXODOS_1-Oximata::EISODOS_2;
				break;
			case 3:
				return Oximata::EXODOS_3-Oximata::EISODOS_2;
				break;
			case 4:
				return Oximata::EXODOS_4-Oximata::EISODOS_2;
				break;
			}
			break;
		case 3:
			switch(ex)
			{
			case 1:
				return Oximata::EXODOS_1-Oximata::EISODOS_3;
				break;
			case 2:
				return Oximata::EXODOS_2-Oximata::EISODOS_3;
				break;
			case 4:
				return Oximata::EXODOS_4-Oximata::EISODOS_3;
				break;
			}
			break;
		case 4:
			switch(ex)
			{
			case 1:
				return Oximata::EXODOS_1-Oximata::EISODOS_4;
				break;
			case 2:
				return Oximata::EXODOS_2-Oximata::EISODOS_4;
				break;
			case 3:
				return Oximata::EXODOS_3-Oximata::EISODOS_4;
				break;
			}
			break;
	}
		return x;
}
