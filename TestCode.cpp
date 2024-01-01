#include "DogruParcasi.h"
#include "Daire.h"
#include "Ucgen.h"
using namespace std;
#include <locale>

int main() {
    setlocale(LC_ALL, "Turkish");

    cout << endl << "NOKTA SINIFI İÇİN TEST ÇIKTILARI:" << endl;
    Nokta n1;
    Nokta n2(5);
    Nokta n3(3, 4);
    Nokta n4(n3);
    Nokta n5(n3, 1, -1);

    cout << "Oluşturulan 5 noktanın x ve y değerleri:" << endl;
    n1.yazdir();
    n2.yazdir();
    n3.yazdir();
    n4.yazdir();
    n5.yazdir();

    cout << "1. ve 2. noktaların güncel x ve y değerleri:" << endl;
    n1.setX(10);
    n1.yazdir();
    n2.set(25, 30);
    n2.yazdir();

    //Dogru Parcasi
    cout << endl << "DOGRUPARCASI SINIFI İÇİN TEST SONUÇLARI:" << endl;
    Nokta n11;
    Nokta n21(3, 4);
    Nokta n31(0, 0);
    Nokta n41(4, 0);
    Nokta n45(2, 3);
    DogruParcasi dp(n31, n41);
    DogruParcasi dp2(dp);
    DogruParcasi dp3(n21, 10, 45);
    dp.kesisimNokta(n45).yazdir();
    cout << "Oluşturulan 3 doğru parçasının başlangıç ve bitiş noktaları:" << endl;
    dp.yazdir();
    dp2.yazdir();
    dp3.yazdir();

    cout << "2. doğru parçasının başlangıç ve bitiş noktaları:" << endl;
    dp2.setP1(Nokta());
    dp2.yazdir();

    cout << "1. doğru parçası için uzunluk değeri: " << dp.uzunluk() << endl;
    cout << "1. doğru parçası içib orta nokta: " << dp.ortaNokta().toString() << endl;


    //Daire
    cout << endl << "DAIRE SINIFI İÇİN TEST SONUÇLARI:" << endl;
    Nokta merkez1(0, 0);
    Nokta merkez2(5, 5);
    Daire d1(merkez1, 5);
    Daire d2(d1);
    Daire d3(d2, 3);
    Daire d4(merkez2, 3);
    cout << "Daire 1: ";
    d1.yazdir();
    cout << "Alan: " << d1.alan() << ", Çevre: " << d1.cevre() << endl;

    cout << "Daire 2: ";
    d2.yazdir();
    cout << "Alan: " << d2.alan() << ", Çevre: " << d2.cevre() << endl;

    cout << "Daire 3: ";
    d3.yazdir();
    cout << "Alan: " << d3.alan() << ", Çevre: " << d3.cevre() << endl;

    cout << "Daire 1 ve Daire 2 Kesişim Durumu: " << d1.kesisim(d2) << endl;
    cout << "Daire 1 ve Daire 3 Kesişim Durumu: " << d1.kesisim(d4) << endl;

    //Ucgen
    cout << endl << "UCGEN SINIFI İÇİN TEST SONUÇLARI:" << endl;
    Ucgen ucgen(Nokta(0, 0), Nokta(4, 0), Nokta(0, 3));

    cout << ucgen.toString() << endl;
    cout << "Alan: " << ucgen.alan() << endl;
    cout << "Çevre: " << ucgen.cevre() << endl;

    double* acilar = ucgen.acilar();
    cout << "Açılar: " << acilar[0] << ", " << acilar[1] << ", " << acilar[2] << endl;











}

