#include <bits/stdc++.h>

using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void reverseArray(int arr[], int start, int end)
{
    sort(arr, arr + end + 1);

    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void Counting_sort(int a[], int n)
{
    int largest = -1;
    for (int i = 0; i < n; i++)
    {
        largest = max(largest, a[i]);
    }

    vector<int> freq(largest + 1, 0);

    for (int i = 0; i < n; i++)
    {
        freq[a[i]]++;
    }
    int j = 0;

    for (int i = 0; i <= largest; i++)
    {
        while (freq[i] > 0)
        {
            a[j] = i;
            freq[i]--;
            j++;
        }
    }
}

void selectionSort(int a[], int n)
{
    for (int pos = 0; pos <= n - 2; pos++)
    {
        int current = a[pos];
        int min_position = pos;

        for (int j = pos; j < n; j++)
        {
            if (a[j] < a[min_position])
            {
                min_position = j;
            }
        }
        swap(a[min_position], a[pos]);
    }
}

void intsertionSort(int arr[], int n)
{
    for (int i = 1 ; i < n ; i++)
    {
        int current = arr[i];
        int prev = i - 1;
        while (prev >= 0 && arr[prev] > current)
        {
            arr[prev + 1] = arr[prev];
            prev -- ;
        }
        arr[prev+1] = current ;
    }
}

int main()
{
    int arrC = 0;
    cin >> arrC;
    for (int i = 0; i < arrC; i++)
    {
        int n = 0;
        cin >> n;
        int *arr = new int[n];
        for (int j = 0; j < n; j++)
        {
            cin >> arr[j];
        }
        cout << "This is the output of the reverseArray Method : ";
        reverseArray(arr, 0, n - 1);
        printArray(arr, n);
        cout << "\n";

        cout << "This is the output of the CountingArray Method : ";
        Counting_sort(arr, n);
        printArray(arr, n);
        cout << "\n";

        cout << "This is the output of the reverseArray Method : ";
        reverseArray(arr, 0, n - 1);
        printArray(arr, n);
        cout << "\n";

        cout << "This is the output of the Selection Sort Method : ";
        selectionSort(arr, n);
        printArray(arr, n);
        cout << "\n";

        cout << "This is the output of the reverseArray Method : ";
        reverseArray(arr, 0, n - 1);
        printArray(arr, n);
        cout << "\n";
        
        cout << "This is the output of the Insertion Sort Method : ";
        intsertionSort(arr, n);
        printArray(arr, n);
        cout << "\n";
    }
    return 0;
}