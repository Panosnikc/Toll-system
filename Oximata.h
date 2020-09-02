#ifndef OXIMATA_H_
#define OXIMATA_H_
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

class Oximata {
public:
	Oximata();
	virtual ~Oximata();
	Oximata(const string&, time_t, time_t, int, int);
	void setar_pinakidas(const string &);
	string getar_pinakidas() const;
	void setEnter_time();
	string getEnter_time() const;
	void setExit_time();
	string getExit_time() const;
	void setEisodos( int );
	int getEisodos() const;
	void setExodos(int);
	int getExodos() const;
	virtual double poso() const = 0;
	int apostash(int,int) const;
	static const int EISODOS_1 = 0;
	static const int EXODOS_1 = 0;
	static const int EISODOS_2 = 65;
	static const int EXODOS_2 = 65;
	static const int EISODOS_3 = 118;
	static const int EXODOS_3 = 118;
	static const int EISODOS_4 = 311;
	static const int EXODOS_4 = 311;

private:
	Oximata(const Oximata&);
	Oximata& operator = (const Oximata&);
	string ar_pinakidas;
	time_t enter_time;
	time_t exit_time;
	int eisodos;
	int exodos;
};

#endif /* OXIMATA_H_ */
