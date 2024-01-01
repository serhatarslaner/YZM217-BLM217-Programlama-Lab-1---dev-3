#include <iostream>
#include "Nokta.h"
#ifndef DAIRE_H
#define DAIRE_H


class Daire {
public:


	Daire(const Nokta& temp1, double r1);
	Daire(const Daire& temp1);
	Daire(const Daire& temp1, double x);

	double alan();

	double cevre();

	double kesisim(const Daire& temp1);

	string toString();
	void yazdir();



private:
	double r;
	Nokta merkez;

};
#endif 
