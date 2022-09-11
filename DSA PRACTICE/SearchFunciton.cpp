#include <bits/stdc++.h>
#include <iomanip>

using namespace std;

bool mypredicate(int i, int j)
{
    return (i == j);
}
int main()
{
    vector<int> haystack = {10, 20, 30, 40, 50, 60, 70, 80, 90};
    int needle1[] = {20, 30, 40, 50, 60};

    int needle2[] = {40, 50, 60};

    vector<int>::iterator it;
    it = search(haystack.begin(), haystack.end(), it, it + 5);

    for (int i = 0; i < 4; i++)
    {
        cout << it[i] << " , ";
    }
    cout << endl;

    // vector<int>::iterator it2;
    // it2 = search(haystack.begin(), haystack.end(), it2, it2 + 3, mypredicate);
    // for (int i = 0; i < 3; i++)
    // {
    //     cout << it2[i] << " , ";
    // }
    // cout << endl;
    return 0;
}