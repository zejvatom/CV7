#include "Kruh.h"
#include "Tvar.h"
#include <iostream>
#include <cmath>

Kruh::Kruh() {
    r = 1;
    x = 0;
    y = 0;
}

Kruh::Kruh(double rr, double xx, double yy){
    r = rr;
    x = xx;
    y = yy;
}

//void Kruh::vypisInfo() {
//    std::cout << "(r, x, y) = (" << r << "," << x << "," << y << ")" << "\n";
//}

//double Kruh::obsah() const {
//    return (3.1415 * r * r);
//}

//double Kruh::obvod() const {
//    return (3.1415 * 2 * r);
//}

bool Kruh::leziUvnitr(double xx, double yy) const {
    double vzdalenost = (sqrt((x-xx)*(x-xx)+(y-yy)*(y-yy)));
    if (vzdalenost > r){
        return false;
    }
    else{
        return true;
    }
}

double Kruh::x_min() const{
    return x - r;
}

double Kruh::x_max() const{
    return x + r;
}

double Kruh::y_min() const{
    return y - r;
}

double Kruh::y_max() const{
    return y + r;
}
