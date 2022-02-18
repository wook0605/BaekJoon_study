#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int combination(int a, int b)
{
    int com = 0, sum_1 = 1, sum_2 = 1;
    for (com; com < b; com++)
    {
        sum_1 *= (a - com);
        sum_2 = (b - com);
    }
    return (sum_1 / sum_2);
}

int main()
{
    int card_num = 0, black_jack = 0, sum = 0, comb = 0, answer = 0;
    while (true)
    {
        cin >> card_num;
        cin >> black_jack;

        if (card_num >= 3 && card_num <= 100 && black_jack >= 10 && black_jack <= 300000) break;
    }
    vector<int> card(card_num);
    for (int i = 0; i < card_num; i++)
    {
        cin >> card[i];
        if (card[i] > 100000) i--;
    }
    comb = combination(card_num, 3);
    vector<int>Combi(comb*6);
    for (int i = 0; i < card_num; i++)
    {
        for (int j = 1; j < card_num; j++)
        {
            if (j != i)
            {
                for (int k = 2; k < card_num; k++)
                {
                    if (k != j && k != i)
                    {
                        Combi[sum] = card[i] + card[j] + card[k];
                        if (Combi[sum] > black_jack) Combi[sum] = 0;
                        sum++;
                    }
                }
            }
        }
    }
    sort(Combi.begin(), Combi.end());
    answer = *max_element(Combi.begin(), Combi.end());
    cout << answer;
}