#include <cmath>
#include "Tvar.h"

double Tvar::obsah() const
{
    const int Nmax = 1000;

    double deltaX = x_max() - x_min();
    double deltaY = y_max() - y_min();
    double h;

    if (deltaX < deltaY)
    {
        h = (double)deltaY / Nmax;
    }
    else
    {
        h = (double)deltaX / Nmax;
    }

    int NX = (int)std::ceil(deltaX/h) + 1;
    int NY = (int)std::ceil(deltaY/h) + 1;

    double x0 = x_min() + h/2;
    double y0 = y_min() + h/2;
    const double ds = (double)(h*h);

    double x = x0;
    double y = y0;
    double S = 0.0;

    for (int j = 0; j < NY; j++)
    {
        for (int i = 0; i < NX; i++)
        {
            if (leziUvnitr(x,y))
            {
                S = S + ds;
            }
            x = x + h;
        }
        x = x0;
        y = y + h;
    }

    return S;
}
