#include <bits/stdc++.h>
#include <iomanip>

using namespace std;

void rotate(vector<vector<int>> &matrix)
{
    int n = matrix.size();
    int a = 0;
    int b = n - 1;

    while (a < b)
    {
        for (int i = 0; i < (b - a); ++i)
        {
            swap(matrix[a][a + i], matrix[a + i][b]);
            swap(matrix[a][a + i], matrix[b][b - i]);         
            swap(matrix[a][a + i], matrix[b - i][a]);
        }
        ++a;
        --b;
    }
}

/*
here in this method
   0  0  0 
   0  0  0 
   0  0  0
   first rotate the corners then rotate the one less row and so till it meets in the middle where loop breaks  ....
   secondly u need to solve for the half matrix the rest half will be solved by itself .....
   Now try to apply this algo for higher order matrix.....
   step-1
   [0,0]-->[0,2]
   [0,0]-->[2,2]
   [0,0]-->[2,0]
   step-2
   [0,1]-->[1,2]
   [0,1]-->[2,1]
   [0,1]-->[1,0]
*/
int main()
{
    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    int n = matrix.size();
    for (int i = 0; i < n; i++)
    {
        cout << "[ ";
        for (int j = 0; j < n; j++)
        {
            cout << matrix[i][j] << " , ";
        }
        cout << "]\n";
    }
    cout << " \n\n\n";
    rotate(matrix);


    for (int i = 0; i < n; i++)
    {
        cout << "[ ";
        for (int j = 0; j < n; j++)
        {
            cout << matrix[i][j] << " , ";
        }
        cout << "]\n";
    }
    return 0;
}