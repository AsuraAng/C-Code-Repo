#include <bits/stdc++.h>
#include <iomanip>

using namespace std;

int fibbo(int n)
{
    if (n == 1)
        return 0; // base condition
    else if (n == 2 || n == 3)
        return 1; // base condition
    else if (n < 0)
        cout << "Invalid index for the term ....\n";
    int a1 = fibbo(n - 1); // Induction Hypothesis --> divide bigger problem into smaller problem
    int a2 = fibbo(n - 2); // Induction Hypothesis --> divide bigger problem into smaller problem
    int answer = a1 + a2;  // Induction Step
    return answer;
}

int fact(int n)
{
    if (n == 0)
        return 1;
    else if (n < 0)
        return -1;
    int answer = n * fact(n - 1);
    return answer;
}

void fiboseries(int n)
{
    int a = 0;
    int b = 1;
    cout << a << " " << b << " ";
    for (int i = n; i > 0; i--)
    {
        b = a + b;
        cout << b << " ";
        a = b - a;
    }
    cout << endl;
}

long long power(int n, int m)
{
    if (m == 0)
        return 1;

    return n * power(n, m - 1);
}

int countDigits(int n)
{
    if (n == 0)
        return 0;
    return countDigits(n / 10) + 1;
}

void printDigitsAsc(int n)
{
    if (n == 0)
        return;
    printDigitsAsc(n - 1);
    cout << n << endl;
}

void printDigitsDesc(int n)
{
    if (n == 0)
        return;
    cout << n << endl;
    printDigitsDesc(n - 1);
}

int sumDigits(int n)
{
    if (n == 0)
        return 0;

    return sumDigits(n / 10) + n % 10;
}

int Multiply(int a, int b)
{
    if (b == 0)
        return 0;

    return Multiply(a, b - 1) + a;
}

int countZeroes(int n)
{
    if (n == 0)
        return 0;

    int smallAns = countZeroes(n / 10);

    if (n % 10 == 0)
        return smallAns + 1;
    else
        return smallAns;
}

double gSum(int r, int k)
{
    if (k == 0)
        return 1;

    return gSum(r, k - 1) + 1.0 / pow(r, k);
}

void menu()
{
    for (int i = 0; i < 25; i++)
    {
        cout << "--";
    }

    printf("Welcome to Scientific Calculator");
    for (int i = 0; i < 25; i++)
    {
        cout << "--";
    }
    cout << endl;

    printf("1->Get An Element of Fibbonacci Series \n");
    printf("2->For Getting Factorial of a Number \n");
    printf("3->For Printing the Fibonnacci Seris \n");
    printf("4->Print the Numbers in Ascending \n");
    printf("5->Print the Numbers in Descending \n");
    printf("6->Count the Digits of a given Number \n");
    printf("7->Sum of the Digits of a given Number \n");
    printf("8->Calculate the Power \n");
    printf("9->Multiplication without using '*' Operator \n");
    printf("10->Count Zeroes in a Number  \n");
    printf("11->Geometric Sum till the specified term in Geometric Series \n");
    printf("Enter the choice (1 to 11) : ");
}

int main()
{
    bool flag = true;

    while (flag)
    {
        menu();
        int ch;
        cin >> ch;
        if (ch == 1)
        {
            cout << "Enter the poition of fibonnaci term to be presented : ";
            int n;
            cin >> n;
            cout << "The Number at the given Index in Fibonacci series is :" << fibbo(n) << endl;
        }
        else if (ch == 2)
        {
            int n;
            cout << "Enter the Number Of which the Factorial is needed :  ";
            cin >> n;
            cout << "The Factorial of the Given Number is : " << fact(n) << endl; // show the factorial value only
        }
        else if (ch == 3)
        {
            int n;
            cout << "Enter the Number of Elements you want to be presented : ";
            cin >> n;
            cout << "The Fibonnaci Series till the desired Index is : \n";
            fiboseries(n); // present the series in linear manner with spacing
        }
        else if (ch == 4) // print numbers Ascending
        {
            cout << "Enter the Count till which Numbers have to be presented in Ascending order : ";
            int n;
            cin >> n;
            printDigitsAsc(n);
        }
        else if (ch == 5) // print numbers Descending
        {
            cout << "Enter the Count till which Numbers have to be presented in Descending order : ";
            int n;
            cin >> n;
            printDigitsDesc(n);
        }
        else if (ch == 6) // Count the Digits
        {
            cout << "Enter the Number of which you want the digits to be counted : ";
            long long n;
            cin >> n;
            cout << "The Number of Digits in the given Number : " << countDigits(n) << endl;
        }
        else if (ch == 7) // Sum of Digits
        {
            cout << "Enter the Number of which you want to find the Sum of Digits : ";
            long long n;
            cin >> n;
            cout << "The Sum of the Digits of the Given Number is : " << sumDigits(n) << endl;
        }
        else if (ch == 8) // Power
        {
            int n;
            int p;
            cout << "Enter the Number : ";
            cin >> n;
            cout << "Enter the Power for the Number : ";
            cin >> p;
            cout << "The Value of the Number with the given Power is : " << power(n, p) << endl;
        }
        else if (ch == 9) // Multiply using +
        {
            int a, b;
            cout << "Enter the First Number : ";
            cin >> a;
            cout << "Enter the Second Number : ";
            cin >> b;
            cout << "The Product of the given Numbers using only '+' Operator is : " << Multiply(a, b)<<endl;
        }
        else if (ch == 10) // Count Zeroes in the given Number
        {
            int n;
            cout << "Enter the Number in which you would like to find out the zeroes : ";
            cin >> n;
            cout << "The Number of Zeroes in the Given Number are : " << countZeroes(n) << endl;
        }
        else if (ch == 11) // Geormetirc Sum
        {
            int r, k;
            cout << "Enter the Value of the Geometric Ratio : ";
            cin >> r;
            cout << "Enter the position in series till where you need the sum to be represented : ";
            cin >> k;
            cout << "The Geometric Sum of the series till the place you have specified : " << gSum(r, k) << endl;
        }
    }

    return 0;
}