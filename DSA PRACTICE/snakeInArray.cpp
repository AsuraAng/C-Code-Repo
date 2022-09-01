#include <bits/stdc++.h>
#include <iomanip>

using namespace std;

pair<int, int> stairCaseSearch(int arr[][4], int n, int m, int key)
{
    if (key < arr[0][0] || key > arr[n - 1][m - 1])
    {
        return (-1, -1);
    }

    int i = 0;
    int j = m - 1;
    while (i < n && j >= 0)
    {
        if (arr[i][j] == key)
        {
            return (i, j);
        }
        else if (arr[i][j] > key)
        {
            j--;
        }
        else
        {
            i++;
        }
    }
    return (-1, -1);
}


int main()
{
    vector<vector<int>> array = {{1, 2, 3, 4},
                                 {5, 6, 7, 8},
                                 {9, 10, 11, 12},
                                 {13, 14, 15, 16}};

    int i = 0;
    int j = 0;

    int n = array.size();
    int m = n ;
    int key ;
    cin >> key ;

    pair<int , int > coordinate = stairCaseSearch(array , n , m , key);

    if(coordinate.first != -1 && coordinate.second != -1)
    {
        cout<<"The searched element is at the coordiantes : " << coordinate.first << " , " << coordinate.second << endl ;
    }
    else 
    {
        cout << "The Element searched is not present in the given 2D array !!! "<< endl ;
    }


    while ((i < n && i >= 0) && (j < n && j >= 0))
    {
        if (i == 0 && j == 0)
        {
            cout << array[i][j] << " ";
            j++;
        }
        else if (i == 0 && j >= 0)
        {
            int a = j;
            for (i = 0; i <= a; i++)
            {
                cout << array[i][j] << " ";
                j--;
            }
            j = 0;
            if (i == n)
            {
                i--;
                j++;
            }
        }
        else if (j == 0 && i >= 0)
        {
            int b = i;
            for (j = 0; j <= b; j++)
            {
                cout << array[i][j] << " ";
                i--;
            }
            i = 0;
            if (j == n)
            {
                j--;
                i++;
                cout << j << endl;
            }
        }
        else if (i == n - 1)
        {
            int b = i;
            while (j < n)
            {
                cout << array[i][j] << " ";
                j++;
                i--;
            }
            if (j == n)
            {
                j--;
                i += 2;
            }
        }
        else if (j == n - 1)
        {
            int a = j;
            while (i < n)
            {
                cout << array[i][j] << " ";
                i++;
                j--;
            }
            if (i == n)
            {
                i--;
                j += 2;
            }
        }
        else if (i == n - 1 && j == n - 1)
        {
            cout << array[i][j] << " ";
        }
    }

    return 0;
}