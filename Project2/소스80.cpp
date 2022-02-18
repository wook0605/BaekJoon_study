#include <iostream>
#include <sstream>

using namespace std;

int main()
{
    string str;
    string token = " ";
    int count = 0;
    getline(cin, str);
    istringstream input(str);

    while (getline(input, token, ' '))
    {
        if (token.size())
        {
            count++;
        }
    }

    cout << count;

}