#include "Ucgen.h"
#include <cmath>
Ucgen::Ucgen(Nokta temp1, Nokta temp2, Nokta temp3) {
	setP1(temp1);
	setP2(temp2);
	setP3(temp3);
}

Nokta Ucgen::getP1() { return nokta1; }
void Ucgen::setP1(const Nokta& temp1) { nokta1 = temp1; }

Nokta Ucgen::getP2() { return nokta2; }
void Ucgen::setP2(const Nokta& temp1) { nokta2 = temp1; }

Nokta Ucgen::getP3() { return nokta3; }
void Ucgen::setP3(const Nokta& temp1) { nokta3 = temp1; }

string Ucgen::toString() {


	return ("Ucgenin noktalari : " + getP1().toString() + "," + getP2().toString()
		+ "," + getP3().toString());
}
double Ucgen::alan() {

	double yaricevre = (cevre() / 2);
	DogruParcasi kenar1(nokta1, nokta2);
	DogruParcasi kenar2(nokta1, nokta3);					//Heron formülü
	DogruParcasi kenar3(nokta2, nokta3);
	double alan = sqrt(yaricevre * (yaricevre - kenar1.uzunluk()) * (yaricevre - kenar2.uzunluk()) * (yaricevre - kenar3.uzunluk()));
	return alan;
}
double Ucgen::cevre() {
	DogruParcasi kenar1(nokta1, nokta2);
	DogruParcasi kenar2(nokta1, nokta3);
	DogruParcasi kenar3(nokta2, nokta3);

	double cevre = kenar1.uzunluk() + kenar2.uzunluk() + kenar3.uzunluk();
	return cevre;
}

double* Ucgen::acilar() {

	DogruParcasi kenar1(nokta1, nokta2);
	DogruParcasi kenar2(nokta1, nokta3);
	DogruParcasi kenar3(nokta2, nokta3);
	double A = alan();
	double aci1 = (180 / 3.14) * asin(2 * A / (kenar1.uzunluk() * kenar2.uzunluk()));
	double aci2 = (180 / 3.14) * asin(2 * A / (kenar2.uzunluk() * kenar3.uzunluk()));
	double aci3 = 180 - (aci1 + aci2);

	static double sonuc[3] = { aci1,aci2,aci3 };


	return sonuc;
}