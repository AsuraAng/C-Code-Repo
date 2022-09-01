// write a code to print all the prime numbers between a and b .
#include <bits/stdc++.h>
#include <iomanip>

using namespace std;

int main()
{
    int a, b;
    cout << "Enter the Starting number :";
    cin >> a;
    cout << "Enter the Ending number :";
    cin >> b;

    cout << "The primes between " << a << " and " << b << " are : ";
    for (int i = a; i <= b; i++)
    {
        int j;
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                break;
            }
        }
        if (j == i)
        {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}