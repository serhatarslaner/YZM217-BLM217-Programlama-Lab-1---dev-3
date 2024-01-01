#include "DogruParcasi.h"
#include "Nokta.h"
#include <cmath>
#ifndef UCGEN_H
#define UCGEN_H

using namespace std;



class Ucgen
{
public:
	Ucgen(Nokta temp1, Nokta temp2, Nokta temp3);


	Nokta getP1();
	void setP1(const Nokta& temp1);

	Nokta getP2();
	void setP2(const Nokta& temp1);

	Nokta getP3();
	void setP3(const Nokta& temp1);


	string toString();
	double alan();
	double cevre();
	double* acilar();



private:
	Nokta nokta1;
	Nokta nokta2;
	Nokta nokta3;
};
#endif
