#include "deklaracija.h"

void MetodaRungeKutta1(double(f)(double, double), double x0, double y0, const double &h){

    cout << setw(3) << "n" << setw(9) << "Xn" << setw(11) << "Yn" << endl;
    ispis(0, x0, y0);

    for(int i=1; i<=5; i++){

        double k1, k2, k3, k4;

        k1=h*f(x0, y0);
        k2=h*f(x0+1/2.*h, y0+1/2.*k1);
        k3=h*f(x0+1/2.*h, y0+1/2.*k2);
        k4=h*f(x0+h, y0+k3);

        x0+=h;
        y0=y0+1/6.*(k1+2*k2+2*k3+k4);

        ispis(i, x0, y0);

    }

    cout << endl;

}

void MetodaRungeKutta2(double(f)(double, double), double x0, double y0, const double &x1, const int &n){

    cout << setw(3) << "n" << setw(9) << "Xn" << setw(11) << "Yn" << endl;
    ispis(0, x0, y0);

    double h((x1-x0)/n);
    int i(1);
    double epsilon(0.0000001);

    while(x0+epsilon<x1){

        double k1, k2, k3, k4;

        k1=h*f(x0, y0);
        k2=h*f(x0+1/2.*h, y0+1/2.*k1);
        k3=h*f(x0+1/2.*h, y0+1/2.*k2);
        k4=h*f(x0+h, y0+k3);

        x0+=h;
        y0=y0+1/6.*(k1+2*k2+2*k3+k4);

        ispis(i, x0, y0);

        i++;

    }

    if(i!=1) cout << "y(" << x1 << ")=" << y0 << endl;
    else cout << "Nemoguce pronaci y1 sa takvim pocetnim uslovom" << endl;

}

void ispis(const double &i, const double &x0, const double &y0){
    cout << setw(3) << i << setw(9) << x0 << setw(11) << y0 << endl;
}
