#include <bits/stdc++.h>
using namespace std;

bool compare(pair < string, int > f1, pair < string, int > f2)
{
    return f2.second > f1.second;
}

bool compareName(pair < string, int > f1, pair < string, int > f2)
{
    return f2.first > f1.first;
}
vector<pair<string, int>> sortFruits(vector<pair<string, int>> v, string S)
{
    // your code  goes here
    if (S == "price")
    {
        sort(v.begin(), v.end(), compare);
        return v;
    }
    else
    {
        sort(v.begin(), v.end(), compareName);
        return v;
    }
}

int main()
{

    vector<pair<string, int>> fruits = {
        {"apple", 10},
        {"mango", 100},
        {"guava", 20},
        {"papaya", 40},
        {"orange", 60},
        {"banana", 120},
    };

    sort(fruits.begin(), fruits.end(), compare);

    for (auto x : fruits)
    {
        cout << x.first << " " << x.second << endl;
    }

    return 0;
}