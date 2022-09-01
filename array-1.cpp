#include <bits/stdc++.h>
using namespace std;

// algorithm for finding the largest number..
int largestElement(vector<int> arr)
{
    int n = arr.size();
    int largest = 0;
    for (int i = 0; i < n; i++)
    {
        largest = max(largest, arr[i]);
    }
    return largest;
}

// algorithm for reversing the order of elements of an array..
void reverseArray(vector<int> arr, int n)
{
    int s = 0;
    int e = n - 1;

    while (s < e)
    {
        swap(arr[s], arr[e]);
        s += 1;
        e -= 1;
    }

    cout << "The Reversed Array is : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// algorithm for printing all the unique pairs possible to be formed in an array
void printAllPairs(vector<int> arr, int n)
{
    cout << "\nThe Possible Unique pairs of the given array are :\n";
    for (int i = 0; i < n; i++)
    {
        int x = arr[i];
        for (int j = i + 1; j < n; j++)
        {
            int y = arr[j];
            cout << "(" << x << " , " << y << ")" << endl;
        }
        cout << endl;
    }
}

// for getting subArrays of the given array
void printSubArrays(vector<int> arr, int n)
{
    cout << "All the Possible Sub Arrays are : " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            for (int k = i; k <= j; k++)
            {
                cout << arr[k] << "  ";
            }
            cout << endl;
        }
        cout << endl;
    }
    cout << endl;
}

// Algorithm for getting the sum of the subarrays

// Algorithm - 1
int largestSubarraySum1(vector<int> arr, int n)
{
    int largestSum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int subArraySum = 0;
            for (int k = i; k <= j; k++)
            {
                subArraySum += arr[k];
            }
            largestSum = max(largestSum, subArraySum);
        }
    }
    return largestSum;
}


// Algorithm - 2
int largestSubarraySum2(vector<int> arr , int n )
{
    int prefix[100]={0};
    prefix[0] = arr[0];
    for (int i = 0; i < n; i++)
    {
        prefix[i] = prefix[i-1] + arr[i];
    }
    
    int largestSum = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = i ; j < n; j++)
        {
            int subArraySum = i > 0 ? prefix[j]-prefix[i-1] : prefix[j];
        }
        
    }
    
    
}
// Algorithm - 3 
// MAIN FUNCTION
int main(int argc, char const *argv[])
{
    vector<int> arr = {};
    int n = 0;
    cout << "Enter the Number of elements of the Array : ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter the element : ";
        int x = 0;
        cin >> x;
        arr.push_back(x);
    }

    cout << "The Entered Array is : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << endl;

    int largest = largestElement(arr);
    cout << largest << " is the largest element of the given array ." << endl;

    reverseArray(arr, n);

    printAllPairs(arr, n);
    
    printSubArrays(arr, n);
    int largest_sum = largestSubarraySum1(arr, n);
    cout << "The largest Sub-Array Sum is : " << largest_sum << endl;

    return 0;
}
