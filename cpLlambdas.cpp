#include <iostream>
#include <vector>
#include <algorithm>
#include "RemoveDups.h"
#include "stringGym.h"

using namespace std;

void biggies(vector<string> &words, vector<string>::size_type sz);

void biggies(vector<string> &words, vector<string>::size_type sz)
{
    cout << "gm" << endl;

    elimDups(words); // put words in alphabetical order and remove duplicates
    stable_sort(words.begin(), words.end(),
                [](const string &a, const string &b)
                { return a.size() < b.size(); });

    // get an iterator to first element whose size() is >= sz
    auto wc = find_if(words.begin(), words.end(),
                      [sz](const string &a)
                      { return a.size() >= sz; });

    // compute the number of elements with size >= sz

    auto count = words.end() - wc;
    cout << count << " " << make_plural(count, "word", "s")
         << " of length " << sz << " or longer" << endl;

    // print words of the give size or longer, each on followed by a space
    for_each(wc, words.end(),
             [](const string &s)
             { cout << s << " "; });
    cout << endl;
}

int main()
{

    vector<string> v1;
    string aword;

    cout << "Enter words to be analyzed:" << endl;
    while (cin >> aword)
    {
        v1.push_back(aword);
    }
    cout << "going to find words for length > 5" << endl;

    return 0;
}