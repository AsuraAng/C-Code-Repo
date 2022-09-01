#include <bits/stdc++.h>
#include <iomanip>

using namespace std;

bool checkTriangle(int A, int B, int C)
{
    if (A + B > C)
        return true;
    else
        return false;
}
int main()
{
    // -->program for adding numbers till the input is positive.
    // int number, sum = 0;

    // cout << "Enter the Number : ";
    // cin >> number;
    // while (number >= 0)
    // {
    //     sum += number;
    //     cout << "Enter the Number : ";
    //     cin >> number;
    // }

    // cout << "The sum of the inputed Numbers is : " << sum;

    // -->program for printing the table of the given number .
    // int n ;
    // cout<<"Enter the Number to create the table : ";
    // cin >> n ;
    // for (int i = 1; i < 11; i++)
    // {
    //     cout<<n<<" * "<<i<<" = "<<n*i<<endl;
    // }

    // --> program for implementing the do while loop.
    // int n, i = 0, sum = 0;
    // cout << "Enter the positive integer value for finding the sum of natural numbers : ";
    // cin >> n;
    // do
    // {
    //     sum += i;
    //     i++;
    // } while (i <= n);
    // cout << "The Sum of the Natural Numbers is : " << sum << endl;

    // --> Just a random example
    // int x, y;
    // cin >> x >> y;
    // if (x == y)
    // {
    //     cout << "Both the numbers are equal";
    // }
    // else
    // {
    //     if (x > y)
    //     {
    //         cout << "X is greater than Y";
    //     }
    //     else
    //     {
    //         cout << "Y is greater than X";
    //     }
    // }

    // --> Program to check if a triangle is scalene, isosceles or equilateral.
    bool trump = true;
    while (trump)
    {
        int sideA, sideB, sideC;
        cout << "Enter the sides of the triangle : ";
        cin >> sideA >> sideB >> sideC;

        bool flag = checkTriangle(sideA, sideB, sideC);
        if (flag)
        {
            while (flag)
            {
                if (sideA == sideB)
                {
                    if (sideB == sideC)
                    {
                        cout << "The given triangle is an equilateral..\n";
                        break;
                    }
                    else
                    {
                        cout << "The given triangle is an isosceles...\n";
                        break;
                    }
                }
                else
                {
                    if (sideB == sideC)
                    {
                        cout << "The given triangle is an isoceles..\n";
                        break;
                    }
                    else
                    {
                        cout << "The given triangle is an scalene...\n";
                        break;
                    }
                }
            }
        }
        else
        {
            cout << "The given sides are not of a triangle...." << endl;
        }
        
        
    }

    return 0;
}
