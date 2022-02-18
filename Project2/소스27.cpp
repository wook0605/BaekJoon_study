#include <iostream>

using namespace std;

int main()
{
    string S;
    int test_case = 1;
    int R = 0;
    do
    {
        cin >> test_case;
    }while (test_case < 0 && test_case >1001);
    

    for (int i = 0; i < test_case; i++)
    {
        do
        {
            cin >> R >> S;
        } while (R < 1 && R >8 && S.size() > 20);
        for (int j = 0; j < S.size(); j++)
        {
            for (int k = 0; k < R; k++)
            {
                cout << S[j] << "\n";
            }
        }
    }
}