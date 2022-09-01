#include <bits/stdc++.h>
#include <iomanip>

using namespace std;

int partition(vector<int> &a, int low, int high)
{
    int pivot = a[high];
    int retNum = low - 1;
    for (int i = low; i < high; i++)
    {
        if (a[i] < pivot)
        {
            retNum++;
            swap(a[i], a[retNum]);
        }
    }
    swap(a[retNum + 1], a[high]);
    return (retNum + 1);
}

void quickSort(vector<int> &a, int s, int e)
{
    // Base Case
    if (s >= e)
    {
        return;
    }

    // Recursiv Case
    int p = partition(a, s, e);
    quickSort(a, s, p - 1);
    quickSort(a, p + 1, e);
}

int main()
{
    vector<int> array = {10, 7, 8, 9, 1, 5};
    int s = 0;
    int e = array.size() - 1 ;
    quickSort(array, s, e);
    for (int i = 0; i <= e; i++)
    {
        cout<< array[i] << ", ";
    }
    
    cout << endl;
    return 0;
}