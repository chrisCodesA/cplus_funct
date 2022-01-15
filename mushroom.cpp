#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char *argv[])
{
    /*
        see stackoverflow:
        parse (split) a string in c++ using delimiter (standard c++)
    */
    string astring = "scott>=tiger>=mushroom";
    string delimiter = ">=";

    size_t posit = 0;
    string tokz;

    while ((posit = astring.find(delimiter)) != string::npos)
    {
        tokz = astring.substr(0, posit);
        cout << tokz << endl;
        astring.erase(0, posit + delimiter.length());
    }
    // without the line below the last substring will not be printed.
    cout << astring << endl;

    return 0;
}