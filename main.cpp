#include "deklaracija.h"

double f(double x, double y){
    return log(x*x); ///mijenjajte izraz lijevo za promjenu funkcije
}                       ///moguće je unijeti sin(x)*pow(y,3) i slično...


int main(){

    ///razmatrano na predzadnjem predavanju, poklapa se sa rješenjima
    MetodaRungeKutta1([](double x, double y){ return y; }, 0, 1, 0.1);
    MetodaRungeKutta2([](double x, double y){ return y; }, 0, 1, 0.5, 5);

    cout << endl;

    ///razmatrano na zadnjem predavanju, poklapa se sa rješenjima
    MetodaRungeKutta1([](double x, double y){ return x*y; }, 0, 1, 0.2);
    MetodaRungeKutta2([](double x, double y){ return x*y; }, 0, 1, 1, 10);

    cout << endl;

    ///dodatno provjeravanje fje za rješavanje diferencijalnih jednačina, poklapa se sa pravim rješenjima
    MetodaRungeKutta1(f, 2, 1, 0.1);
    MetodaRungeKutta2(f, 2, 1, 2.5, 5);

return 0;
}
