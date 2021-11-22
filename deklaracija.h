#ifndef DEKLARACIJA_H
#define DEKLARACIJA_H

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

void MetodaRungeKutta1(double(f)(double, double), double x0, double y0, const double &h);

void MetodaRungeKutta2(double(f)(double, double), double x0, double y0, const double &x1, const int &n=10);

void ispis(const double &i, const double &x0, const double &y0);

#endif // DEKLARACIJA_H
