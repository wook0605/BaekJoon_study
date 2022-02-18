// Å« ¼öÀÇ µ¡¼À
#include <iostream>
#include <algorithm>
#include <string>
#include <stack>
#include <typeinfo>
using namespace std;

int main()
{
    stack<int>stk_1;
    stack<int>stk_2;
    stack<string>stk_3;
    string str[2];
    string result;
    int digit = 0;
    int num = 0;
    cin >> str[0] >> str[1];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < str[i].size(); j++)
        {
            if (i == 0)
            {
                num = str[i][j] - '0';
                stk_1.push(num);
            }
            else
            {
                num = str[i][j] - '0';
                stk_2.push(num);
            }
        }
    }

    while (true)
    {
        if (stk_1.empty() || stk_2.empty())
        {
            if (stk_1.empty() && !stk_2.empty()) //stk_1ÀÌ ºñ¾úÀ» ¶§
            {
                if (digit == 0)
                {
                    num = stk_2.top();
                    stk_2.pop();
                    stk_3.push(to_string(num));
                }

                else
                {
                    num = stk_2.top() + digit;
                    digit = 0;
                    stk_2.pop();
                    if (num / 10 > 0)
                    {
                        digit = num / 10;
                        num -= digit * 10;
                    }
                    stk_3.push(to_string(num));
                }
            }
            else if (stk_2.empty() && !stk_1.empty())
            {
                if (digit == 0)
                {
                    num = stk_1.top();
                    stk_1.pop();
                    stk_3.push(to_string(num));
                }

                else
                {
                    num = stk_1.top() + digit;
                    digit = 0;
                    stk_1.pop();
                    if (num / 10 > 0)
                    {
                        digit = num / 10;
                        num -= digit * 10;
                    }
                    stk_3.push(to_string(num));
                }
            }
            else
            {
                if (digit > 0)
                {
                    stk_3.push(to_string(digit));
                }
                break;
            }
        }
        else
        {
            if (digit == 0)
            {
                num = stk_1.top() + stk_2.top();
                stk_1.pop();
                stk_2.pop();
                if (num / 10 > 0)
                {
                    digit = num / 10;
                    num -= digit * 10;
                }
                stk_3.push(to_string(num));
            }
            else
            {
                num = stk_1.top() + stk_2.top() + digit;
                digit = 0;
                stk_1.pop();
                stk_2.pop();
                if (num / 10 > 0)
                {
                    digit = num / 10;
                    num -= digit * 10;
                }
                stk_3.push(to_string(num));
            }
        } 
    }
    while (!stk_3.empty())
    {

        result = result + stk_3.top();
        stk_3.pop();
    }
    cout << result << "\n";
}

//9223372036854775807 9223372036854775808