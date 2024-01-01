#include <iostream>
#include <string>
#ifndef NOKTA_H
#define NOKTA_H
using namespace std;
class Nokta {

public:
	Nokta();
	Nokta(double xy);
	Nokta(double x1, double y1);
	Nokta(const Nokta& temp);
	Nokta(const Nokta& temp, double offset_x, double offset_y);

	double getX() const;
	void setX(double value);

	double getY() const;
	void setY(double value);

	void set(double x, double y);

	std::string toString();
	void yazdir();

private:
	double x;
	double y;
};
#endif
