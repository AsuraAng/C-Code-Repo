// show the elements of the 2-D array in an array fashion ;
#include <bits/stdc++.h>
#include <iomanip>

using namespace std;

int main()
{
    int array[4][4] = {1, 5, 9, 13, 2, 6, 10, 14, 3, 7, 11, 15, 4, 8, 12, 15};
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << array[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}