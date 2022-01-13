#include <iostream>
#include <vector>
#include <algorithm>
#include "RemoveDups.h"

using namespace std;

void toRun(vector<string> &ashoe)
{
    cout << "Running" << endl;
}
void elimDups(vector<string> &v1)
{
    cout << "Now removing duplicated words:" << endl;
    // sort words alphabetically so we can find duplicates efficiently
    sort(v1.begin(), v1.end());

    // unique reorders the input range so that each word appears once in
    // front portion of the range and returns an iterator one past the unique range
    auto end_unique = unique(v1.begin(), v1.end());

    // erase uses a vector operation to remove the nonunique elements
    v1.erase(end_unique, v1.end());
}
int main()
{

    vector<string> uer_words;
    string uer_input;

    cout << "Enter the words you want to be analyzed:\n";
    while (cin >> uer_input)
    {
        uer_words.push_back(uer_input);
        // cout << uer_input << " " << endl;
    }
    cout << endl;
    cout << "The user entered:\n";
    for (auto someVal : uer_words)
    {
        cout << someVal << " ";
    }
    cout << endl;
    elimDups(uer_words);
    cout << "The analyzed input is now:\n";

    for (auto aval : uer_words)
    {
        cout << aval << " ";
    }
    cout << "\nDone!" << endl;

    return 0;
}
