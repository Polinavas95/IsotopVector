#include <iostream>
#include "Is.h"
#include "El.h"

using namespace std;

int main() {
    Isotope U234("U234", 234.2, 234, 92, 0.1, 1.3, 2385 );
    Isotope U238("U238", 238.6, 238, 92, 0.5, 0.15, 786 );


    U234.GetIso();
    U238.GetIso();
    Element Uranium;
    Uranium.Add(U234);
    Uranium.Add(U238);
    Uranium.GetMaxSgm1();
    Uranium.GetMaxSgm2();
    Uranium.GetMaxfm();

    return 0;
}