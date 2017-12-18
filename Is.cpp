#include "Is.h"
#include <iostream>
using namespace std;

Isotope::Isotope () {

}

Isotope::Isotope (string name, double a, int A, int N, double fm, double Sgm1, double Sgm2) {
    Isotope::name = name;
    Isotope:: a = a;
    Isotope:: A = A;
    Isotope:: N = N;
    Isotope:: fm = fm;
    Isotope:: Sgm1 = Sgm1;
    Isotope:: Sgm2 = Sgm2;

}

void Isotope:: GetIso() {
    cout << "Isotope name: " << name << endl;
    cout << "A: " << A << endl;
    cout << "N: " << N << endl;
    cout << "a: " << a << endl;
    cout << "fm: " << fm << endl;
    cout << "Sigma(n, elastic): " << Sgm1 << " b" << endl;
    cout << "Sigma (n, gamma): " << Sgm2 << " b" << endl;
}

Isotope::~Isotope() {

}