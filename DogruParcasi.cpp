#include "DogruParcasi.h"

using namespace std;

DogruParcasi::DogruParcasi(const Nokta& temp1, const Nokta& temp2) {
    setP1(temp1);
    setP2(temp2);
}
DogruParcasi::DogruParcasi(const DogruParcasi& temp) {
    setP1(temp.getP1());
    setP2(temp.getP2());
}

DogruParcasi::DogruParcasi(const Nokta& temp, double uzunluk, double egim)
{
    double deltaX = (uzunluk / 2) / sqrt(pow(egim, 2) + 1);
    double deltaY = deltaX * egim;

    double x1 = temp.getX() - deltaX;
    double y1 = temp.getY() - deltaY;
    double x2 = temp.getX() + deltaX;
    double y2 = temp.getY() + deltaY;

    setP1(Nokta(x1, y1));
    setP2(Nokta(x2, y2));
}

double DogruParcasi::uzunluk() {
    double sonuc = sqrt(pow(getP2().getX() - getP1().getX(), 2) +
        pow(getP2().getY() - getP1().getY(), 2));        //iki nokta arasi uzaklik formulu

    return sonuc;
}

Nokta DogruParcasi::getP1() const { return nokta1; }
void DogruParcasi::setP1(const Nokta& temp1) { nokta1 = temp1; }
Nokta DogruParcasi::getP2() const { return nokta2; }
void DogruParcasi::setP2(const Nokta& temp1) { nokta2 = temp1; }

Nokta DogruParcasi::kesisimNokta(const Nokta& temp1) {
    
    double m1 = (getP2().getY() - getP1().getY()) / (getP2().getX() - getP1().getX());

   
    double m2 = -1 / m1;

    double kesisimX = (m1 * temp1.getX() - m2 * temp1.getX() - getP1().getY() + getP2().getY() / (m1 - m2));

    double kesisimY = m1 * (kesisimX - getP1().getX()) + getP1().getY();

    return Nokta(kesisimX, kesisimY);

}

Nokta DogruParcasi::ortaNokta() {
    double xorta = (getP1().getX() + getP2().getX()) / 2;
    double yorta = (getP2().getY() + getP2().getY()) / 2;
    Nokta orta{ xorta, yorta };

    return orta;
}

string DogruParcasi::toString() {
    return getP1().toString() + getP2().toString();

}

void DogruParcasi::yazdir() {
    std::cout << "DogruParcasi 1. ve 2. Noktalar: " << toString() << endl;

}


