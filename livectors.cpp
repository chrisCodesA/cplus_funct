#include <iostream>
#include <vector>
#include <list>
#include <complex>
#include <algorithm>
#include <cmath>

using namespace std;

int main(int argc, char *argv[])
{
    list<complex<double>> li_vectors;
    complex<double> comp_vec;
    vector<complex<double>> v1;
    double x, y;

    while (cin >> x >> y)
    {
        comp_vec = complex<double>(x, y);
        // v1.push_back(comp_vec);
    }
    for (auto i : v1)
    {
    }
    cout << "The given vectors are:" << endl;

    return 0;
}
