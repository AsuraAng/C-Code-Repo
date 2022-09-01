#include <bits/stdc++.h>
using namespace std;

class Complex;

class Calc
{
    static long double pi;

public:
    void sum(float a, float b)
    {
        cout << "The sum of the given Real values is : \n";
        cout << a + b<<endl;
    }
    void difference(float a, float b)
    {
        cout << "The difference between the given Real values is : \n";
        cout << a - b<<endl;
    }
    void product(float a, float b)
    {
        cout << "The product of the given Real values is : \n";
        cout << a * b<<endl;
    }
    void divide(int a, int b)
    {
        cout << "The quotient for the division of the given Real values is : \n";
        cout << a / b << "/n";
        cout << "And the remainder division of the given Real values is : \n";
        cout << int(a % b) << "/n";
    }

    // for complex numbers
    void complexsum(Complex, Complex);
    void complexsubtract(Complex, Complex);
    void complexproduct(Complex, Complex);
    void complexsquare(Complex);
};

class Complex
{
private:
    int a, b;
    friend class Calc;

public:
    Complex(void)
    {
        cout << "Enter the real part for the Complex Number : \n";
        cin >> a;
        cout << "Enter the imaginary part for the Complex Number : \n";
        cin >> b;
    }
};

void Calc::complexsum(Complex a1, Complex b1)
{
    cout << "The sum of the given Complex values is : \n";
    cout << a1.a + b1.a << " + " << a1.b + b1.b << "i";
}
void Calc::complexsubtract(Complex a1, Complex b1)
{
    cout << "The difference of the given Complex values is : \n";
    cout << a1.a + b1.a << " + " << a1.b + b1.b << "i";
}
void Calc::complexproduct(Complex a1, Complex b1)
{
    cout << "The product of the given Complex values is : \n";
    int p1 = a1.a * b1.a - a1.b * b1.b;
    int p2 = a1.a * b1.b + a1.b * b1.a;
    cout << p1 << " + " << p2 << "i";
}
void Calc::complexsquare(Complex a1)
{
    cout << "The Square of the given Complex value is : \n";
    cout << a1.a * a1.a - a1.b * a1.b << " + " << 2 * a1.a * a1.b << "i"<<endl;
}

void head()
{
    for (int i = 0; i < 100; i++)
    {
        if (i == 50)
        {
            cout << "CALCULATOR";
        }
        else
        {
            cout << "-";
        }
    }
    cout << endl;
}

void menu()
{
    cout << "--------1 ->For Real Numbers--------" << endl;
    cout << "1.Addition" << endl;
    cout << "2.Subtraction" << endl;
    cout << "3.Product" << endl;
    cout << "4.Division" << endl;
    cout << "--------2 ->For Complex Numbers--------" << endl;
    cout << "1.Addition" << endl;
    cout << "2.Subtraction" << endl;
    cout << "3.Product" << endl;
    cout << "4.Square" << endl;
}

int main()
{
    while (true)
    {
        head();
        menu();

        int ch;
        int ch2;
        cout << "Enter the Domain code (e.g. - 1 or 2) : " << endl;
        cin >> ch;
        cout << "Enter the choice (e.g. - 1,2 ...) : " << endl;
        cin >> ch2;

        Calc calcu;

        if (ch == 1)
        {
            if (ch2 == 1)
            {
                int a, b;
                cout << "Enter the first Number : \n";
                cin >> a;
                cout << "Enter the second Number : \n";
                cin >> b;
                calcu.sum(a, b);
            }
            else if (ch2 == 2)
            {
                int a, b;
                cout << "Enter the first Number : \n";
                cin >> a;
                cout << "Enter the second Number : \n";
                cin >> b;
                calcu.difference(a, b);
            }
            else if (ch2 == 3)
            {
                int a, b;
                cout << "Enter the first Number : \n";
                cin >> a;
                cout << "Enter the second Number : \n";
                cin >> b;
                calcu.product(a, b);
            }
            else if (ch2 == 4)
            {
                int a, b;
                cout << "Enter the Number : \n";
                cin >> a;
                cout << "Enter the second Number : \n";
                cin >> b;
                calcu.divide(a, b);
            }
        }
        else if (ch == 2)
        {

            if (ch2 == 1)
            {
                Complex o1;
                Complex o2;
                calcu.complexsum(o1, o2);
            }
            else if (ch2 == 2)
            {
                Complex o1;
                Complex o2;
                calcu.complexsubtract(o1, o2);
            }
            else if (ch2 == 3)
            {
                Complex o1;
                Complex o2;
                calcu.complexproduct(o1, o2);
            }
            else if (ch2 == 4)
            {
                Complex o1;
                calcu.complexsquare(o1);
            }
        }
    }
    return 0;
}