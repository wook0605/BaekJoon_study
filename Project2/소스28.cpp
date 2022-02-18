// 1712번 손익분기점
#include <iostream>

using namespace std;

int main()
{
    long long int static_value = 0, dynamic_value = 0, Cost = 0, BEP = 0, gross_income = 0, all_value = 0;
    cin >> static_value >> dynamic_value >> Cost;
    all_value = static_value;
    if (dynamic_value >= Cost)
    {
        BEP = -1;
    }
    else
    {
        BEP = (static_value / (Cost - dynamic_value)) + 1;
    }
    cout << BEP;
}