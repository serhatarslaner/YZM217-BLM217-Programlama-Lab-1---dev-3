#include "Nokta.h"


Nokta::Nokta() {
	setX(0);
	setY(0);
}

Nokta::Nokta(double xy) {
	setX(xy);
	setY(xy);
}
Nokta::Nokta(double x1, double y1) {
	setX(x1);
	setY(y1);
}
Nokta::Nokta(const Nokta& temp) {
	setX(temp.getX());
	setY(temp.getY());
}
Nokta::Nokta(const Nokta& temp, double offset_x, double offset_y) {
	setX(temp.getX() + offset_x);
	setY(temp.getY() + offset_y);
}

double Nokta::getY() const { return y; }

void Nokta::setY(double value) { y = value; }
double Nokta::getX() const { return x; }

void Nokta::setX(double value) { x = value; }

void Nokta::set(double x1, double y1) {
	setX(x1);
	setY(y1);
}

string Nokta::toString() {
	return "(" + std::to_string(x) + "," + std::to_string(y) + ")";
}
void Nokta::yazdir() {
	cout << "'String' Koordinat : " << toString() << endl;
}
