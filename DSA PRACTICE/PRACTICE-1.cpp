// 1. FIND IF A GIVEN NUMBER IS A PRIME OR NOT
// #include <bits/stdc++.h>
// using namespace std;

// main()
// {
//     bool flag = true;
//     while (flag)
//     {
//         int n, i = 2;
//         cout << "Enter the Number to be checked if it is a prime or not : ";
//         cin >> n;
//         while (i <= n)
//         {
//             if (n % i != 0)
//             {
//                 i++;
//             }
//             else
//             {
//                 if (i != n)
//                 {
//                     cout << "The given Number is not a Prime Number ....\n";
//                     break;
//                 }
//                 else if (i == n)
//                 {
//                     cout << "The given Number is a Prime Number ...\n";
//                     break;
//                 }
//             }
//         }
//     }
// }

// 2. PRINT ALL PRIME NUMBERS TILL N
// #include <bits/stdc++.h>
// using namespace std;

// void checkPrime(int n)
// {
//     int i = 2;
//     while (i <= n)
//     {
//         if (n % i != 0)
//         {
//             i++;
//         }
//         else
//         {
//             if (i != n)
//             {
//                 break;
//             }
//             else if (i == n)
//             {
//                 cout << n << " ";
//                 break;
//             }
//         }
//     }
// }

// main()
// {
//     bool flag = true;
//     while (flag)
//     {

//         cout << "Enter the Number till which you want to find the Primes : ";
//         int n;
//         cin >> n;

//         int i = 2;
//         while (i <= n)
//         {
//             checkPrime(i);
//             i++;
//         }
//         cout << endl;
//     }
// }