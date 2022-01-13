#include <iostream>
#include <vector>
#include <complex>
#include <fstream>
#include <numeric>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> a1;
    vector<string> a2;
    string a_user_input;

    cout << "Enter words:" << endl;
    while (cin >> a_user_input)
    {
        a2.push_back(a_user_input);
    }
    cout << "The user entered:\n";
    for (string i : a2)
    {
        cout << i << " ";
    }
    cout << "\nDone printing string vector!" << endl;
    for (int i = 0; i < 6; i++)
    {
        a1.push_back(i);
    }

    cout << "The output without dereferencing:\n";
    for (auto ite_a1 = a1.begin(); ite_a1 != a1.end(); ite_a1++)
    {
        cout << *ite_a1 << " ";
    }
    cout << "\nThe out without dereferecing and using for each:\n";
    for (auto aval : a1)
    {
        cout << aval << " ";
    }
    cout << "\nDone!" << endl;

    return 0;
}