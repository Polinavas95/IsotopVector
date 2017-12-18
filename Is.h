#ifndef IsotopVector_IS_H
#define IsotopVector_IS_H
#include <iostream>

using namespace std;

class Isotope {
public:
    string name;
    double a;
    int A;
    int N;
    double fm;
    double Sgm1;
    double Sgm2;

public:
    Isotope ();
    Isotope (string name, double a, int A, int N, double fm, double Sgm1, double Sgm2 );
    ~Isotope();

    void GetIso();
  // void SetIso();
};


#endif //IsotopVector_IS_H