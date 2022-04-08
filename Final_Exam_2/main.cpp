#include <iostream>
#include "math.h"
#include <iomanip>


using namespace std;

const int SEC_IN_DAY = 86400;
const double MU = 1.3274745e20;
const double R_EARTH = 1.496e11;
const double PI = acos(-1);

double ConvertSecondsToDays(double seconds) {
    return seconds / SEC_IN_DAY;
}

double CubedSum(double v1, double v2) {
    double base = v1 + v2;
    return pow(base,3);

}


double HohmannTime(double r1, double r2 = R_EARTH) {
    return ConvertSecondsToDays(PI * sqrt(CubedSum(r1,r2)/(8*MU)));
}


double DirectTime (double rDestination) {
    return 2.0 * sqrt(fabs(rDestination - 1.496e11) / 10) / 86400.0;
}


int main() {
    cout << setw(10) << left << "Planet" << setw(15) << "Hohmann Time" << "Direct Time" << endl;
    cout << fixed << left << setprecision(2) << setw(10) << "Venus" << setw(15) << HohmannTime(1.08e11) << DirectTime(1.08e11) << endl;
    cout << fixed << left << setprecision(2) << setw(10) << "Jupiter" << setw(15) << HohmannTime(7.78e11) << DirectTime(7.78e11) << endl;
    cout << fixed << left << setprecision(2) << setw(10) << "Pluto" << setw(15) << HohmannTime(5.91e12) << DirectTime(5.91e12) << endl;




    return 0;
}
