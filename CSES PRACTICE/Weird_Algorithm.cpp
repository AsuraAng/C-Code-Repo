#include <bits/stdc++.h>
#include <iomanip>

using namespace std;

int main()
{
    long int n;
    cin >> n;
    cout << n << " ";

    
    while (n != 1)
    {
        if (n % 2 == 0)
        {
            n = n / 2;
            cout << n << " ";
        }
        else
        {
            n = n * 3 + 1;
            cout << n << " ";
        }
    }
    return 0;
}