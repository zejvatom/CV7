#ifndef KRUH_H
#define KRUH_H
#include "Tvar.h"


class Kruh : public Tvar {
public:
    Kruh();
    Kruh(double rr, double xx, double yy);

    void vypisInfo();
    //double obsah() const;
    //double obvod() const;
    virtual bool leziUvnitr(double xb, double yb) const;


protected:

private:
    double r, x, y;
    virtual double x_min() const;
    virtual double x_max() const;
    virtual double y_min() const;
    virtual double y_max() const;

};

#endif // KRUH_H
