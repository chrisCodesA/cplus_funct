#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>

using namespace std;
int fstTwoWords(string &kstring, string kdelim)
{

    size_t posit = 0;
    string tokz;
    int k = 0;
    vector<string> frst_two;

    while ((posit = kstring.find(kdelim)) != string::npos && k < 2)
    {
        tokz = kstring.substr(0, posit);
        // cout << tokz << endl;
        frst_two.push_back(tokz);
        kstring.erase(0, posit + kdelim.length());
        k++;
    }
    if (frst_two.size() < 2)
    {
        frst_two.push_back(kstring);
    }
    for (auto i : frst_two)
    {
        cout << i << ".";
    }
    cout << endl;
    // without the line below the last substring will not be printed.
    // cout << kstring << endl;

    return 0;
}
int main(int argc, char *argv[])
{
    string aText;
    int rtns;
    vector<string> frshalf_v1;
    vector<string> sndhalf_v2;

    ifstream readingAFile("toptext.txt");
    if (readingAFile)
    {
        while (getline(readingAFile, aText))
        {
            cout << aText << endl;
            rtns = fstTwoWords(aText, " ");
        }
    }
    else
    {
        cout << "The file: toptext.txt was not found!" << endl;
    }

    readingAFile.close();
    cout << "adding strings" << endl;

    double fst_num;
    double snd_num;
    string tem_num;
    int c;

    ifstream readNumbers("downtext.txt");

    c = 1;
    if (readNumbers)
    {
        while (getline(readNumbers, tem_num))
        {
            if (c == 1)
            {
                fst_num = stod(tem_num);
            }
            if (c == 2)
            {
                snd_num = stod(tem_num);
            }
            c++;
        }
        cout << "Adding: " << fst_num << " + "
             << snd_num << " = " << fst_num + snd_num << endl;
    }
    else
    {
        cout << "The file: downtext.txt was not found!" << endl;
    }
    readNumbers.close();

    return 0;
}