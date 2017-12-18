#ifndef IsotopVector_EL_H
#define IsotopVector_EL_H
#include <iostream>
#include "Is.h"
#include <vector>

using namespace std;

class Element: public Isotope {
private:

    vector <Isotope> E;

public:
    Element();

    ~Element();

    void Add(Isotope X);
    void SetE();
    void GetE();
    void GetMaxSgm1();
    void GetMaxSgm2();
    void GetMaxfm();
};


#endif //IsotopVector_EL_H