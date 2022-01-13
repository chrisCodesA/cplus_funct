#include <iostream>
#include <vector>
#include "stringGym.h"

using namespace std;

string make_plural(size_t ctr, const string &word,
                   const string &ending)
{
    return (ctr > 1) ? word + ending : word;
}

int main()
{
    int ctr = 5;
    string atest;
    atest = "gm";
    string rst;
    rst = make_plural(ctr, atest, "s");
    cout << "Back from make_plural with: " << ctr << " " << rst << endl;

    return 0;
}