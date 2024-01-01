#include "Daire.h"
#include <iostream>
#include <cmath>


Daire::Daire(const Nokta& temp1, double r1) {
	r = r1;
	merkez = temp1;

}

Daire::Daire(const Daire& temp1) {
	r = temp1.r;
	merkez = temp1.merkez;
}

Daire::Daire(const Daire& temp1, double x) {
	r = temp1.r * x;
	merkez = temp1.merkez;

}

double Daire::alan() {

	double a = 3.14 * pow(r, 2);
	return a;

}

double Daire::cevre() {
	double c = 2 * 3.14 * r;
	return c;
}

double Daire::kesisim(const Daire& temp1) {

	double uzaklik = sqrt(pow(merkez.getX() - temp1.merkez.getX(), 2) +
		pow(merkez.getY() - temp1.merkez.getY(), 2));

	if ((temp1.r + r) >= uzaklik)
	{
		if (temp1.r == r && temp1.merkez.getX() == merkez.getX()
			&& temp1.merkez.getY() == merkez.getY()) {
			return 1;
		}
		return 0;
	}
	else { return 2; }

}

string Daire::toString() {
	return "Merkez: (" + std::to_string(merkez.getX()) + "," + std::to_string(merkez.getY()) + ") " + "Yarýçap: " + std::to_string(r);

}
void Daire::yazdir() {
	std::cout << toString() << std::endl;

}


