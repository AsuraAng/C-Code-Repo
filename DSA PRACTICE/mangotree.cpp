#include <bits/stdc++.h>
#include <iomanip>

using namespace std;

int prefixSum(int n, int m, vector<vector<char>> field)
{
    int mango = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (field[i][j] == '#')
            {
                mango++;
            }
        }
    }
    return mango;
}

void printArray(vector<vector<char>> v)
{
    int n = v.size();
    for (int i = 0; i < n ; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    vector<vector<char>> farm = {{'.', '#', '#', '.', '.', '.'}, {'#', '.', '.', '#', '#', '.'}, {'.', '#', '.', '.', '.', '.'}, {'.', '#', '#', '.', '.', '#'}, {'#', '.', '.', '#', '#', '.'}, {'.', '#', '.', '.', '.', '.'}};

    int largest = 0;
    int n = farm.size();
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int n1 = prefixSum(i, j, farm);
            int n2 = prefixSum(n, j, farm) - n1;
            int n3 = prefixSum(i, n, farm) - n1;
            int n4 = prefixSum(n, n, farm) - n1 - n2 - n3;
            int smallest1 = min(n1, n2);
            int smallest2 = min(n2, n3);
            int least = min(smallest1 , smallest2);
            largest = max(largest, least);
        }
    }

    printArray(farm);
    cout << "Hence the Maximum Number of trees are :  " << largest;
    return 0;
}
