#include "Nokta.h"
#ifndef DOGRUPARCASI_H
#define DOGRUPARCASI_H

#include <cmath>
using namespace std;
class DogruParcasi {
public:
	DogruParcasi(const Nokta& temp1, const Nokta& temp2);
	DogruParcasi(const DogruParcasi& temp);
	DogruParcasi(const Nokta& temp, double uzunluk, double egim);

	Nokta getP1() const;
	void setP1(const Nokta& temp1);

	Nokta getP2() const;
	void setP2(const Nokta& temp1);


	Nokta kesisimNokta(const Nokta& temp1);

	double uzunluk();

	Nokta ortaNokta();

	string toString();
	void yazdir();

private:
	Nokta nokta1;
	Nokta nokta2;
};
#endif