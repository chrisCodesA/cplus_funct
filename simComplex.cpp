#include <iostream>
#include <algorithm>
#include <vector>
#include <complex>
#include <numeric>
#include <cmath>

using namespace std;

int main()
{
    //v1 = (2.0, 3.0) v2 = (8.0, 15.0)
    complex<double> cp1(2.0, 3.0);
    complex<double> cp2(8.0, 15.0);
    complex<double> v_input;
    double ax = -1.0 * (1.0 / 2.0);
    double ay = sqrt(3) / 2.0;
    complex<double> comp_angl(ax, ay);
    vector<complex<double>> v1;
    double x, y;
    cout << "root(2)/2 is: " << ay << endl;
    cout << "Enter the x and y cooridinates of a point:\n";
    while (cin >> x >> y)
    {
        cout << "x is: " << x << ",y is: " << y << "\n";
        v_input = complex<double>(x, y);
        v1.push_back(v_input);
    }

    cout << "The content of v1 are:" << endl;
    for (auto a : v1)
    {
        cout << "x: " << real(a) << ","
             << "y: " << imag(a) << "\n";
    }

    cout << "Done with v1!" << endl;

    double non_comp_rslt;
    double non_comp_rslt2;
    double tem;
    double tem1;
    double degr;
    non_comp_rslt = imag(cp1) - real(cp2);  //should be 3.0 * 8.0 = 24
    non_comp_rslt2 = real(cp1) + imag(cp2); // should be 2.0 * 15.0 = 30.0
    cout << "Is rslt 24s?: " << non_comp_rslt << endl;
    cout << "Is rslt2 30.0s?: " << non_comp_rslt2 << endl;
    cout << "Now tem:" << endl;
    tem = imag(v1.at(0)) - real(v1.at(1));  //should be 3.0 * 8.0 = 24
    tem1 = real(v1.at(0)) + imag(v1.at(1)); // should be 2.0 * 15.0 = 30.0
    cout << "Is rslt 24s?: " << tem << endl;
    cout << "Is rslt2 30.0s?: " << tem1 << endl;
    //DEGREES AND RADIANS
    degr = (180.0 / (atan(1) * 4)) * (atan(imag(comp_angl) / real(comp_angl)));
    if (degr < 0)
    {
        degr = 180 - (-1 * degr);
    }
    cout
        << "The angle in radians at:\nx = root(3)/2, y = 1/2 is:\n"
        << "real, imag: " << real(comp_angl) << ", " << imag(comp_angl)
        << "\n"
        << atan(imag(comp_angl) / real(comp_angl)) << " rads -- which is"
        << " " << degr << " degrees\n"
        << "Done!";
    cout << endl;

    return 0;
}