#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main()
{

    // count the number of times each word occurs in the input
    map<string, size_t> word_count; // empty map from string to size_t

    string word;

    while (cin >> word)
    {
        // using the [] is called subscriptinggg
        ++word_count[word]; //fetch and increment the counter for word
    }

    for (const auto &w : word_count) // for each elemnt in the map
    {
        // print the results
        cout << w.first << " occurs " << w.second
             << ((w.second > 1) ? " times" : "time") << endl;
    }

    return 0;
}

// found in chapter 11.1