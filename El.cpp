#include "El.h"
#include <iostream>

using namespace std;

Element::Element(){

}



void Element:: Add(Isotope X) {
    E.push_back(X);

}

void Element:: GetMaxSgm1() {
    double max=E[0].Sgm1;
    int k=0;
    for (int i=1; i<E.size(); i++) {
        if (E[i].Sgm1 > max) {
            max = E[i].Sgm1;
            i=k;


        }
    }
    cout << "Max Sigma(n, elastic) is: " <<max << " b in: "<<E[k].name << endl;

}

void Element:: GetMaxSgm2() {
    double max=E[0].Sgm2;
    int k=0;
    for (int i=1; i<E.size(); i++) {
        if (E[i].Sgm2 > max) {
            max = E[i].Sgm2;
            k=i;


        }
    }
    cout << "Max Sigma(n,gamma)is: " <<max << " b in: " << E[k].name << endl;


}

void Element:: GetMaxfm() {
    double max=E[0].fm;
    int k=0;
    for (int i=1; i<E.size(); i++) {
        if (E[i].fm > max) {
            max = E[i].fm;
            k=i;


        }

    }

    cout <<"Max isotope part is: "<< max  << " in: " <<E[k].name<<endl;


}
Element::~Element() {

}