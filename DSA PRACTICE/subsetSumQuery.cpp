// Subset Sum Queries
// Given an array and N number of queries, where in each query you have to check whether a subset whose sum is equal to given number exists in the array or not.

// Input Format

// In the function two vectors num and query are passed.

// Output Format

// Return a bool vector of size N representing each query.



// Sample Input

// num[]   = {1, 2, 3}
// query[] = {5, 3, 8} 


// Sample Output

// {Yes, Yes, No}


// Explanation

// There is a subset with sum 5, subset is {2, 3}
// There is a subset with sum 3, subset is {1, 2}
// There is no subset with sum 8.

#include<bits/stdc++.h>
using namespace std;

vector<bool> subsetSum(vector<int> v, vector<int> q)
{
    int n = q.size();
    vector<bool> b(n);
    
    bitset<10000> bit;
    bit.reset();
    bit[0] = 1;
  
    for (int i = 0; i < v.size(); ++i)
        bit |= (bit << v[i]);
        
    for(int i=0; i<n; i++)
    {
        int x = q[i];
        bit[x]? b[i]=true : b[i]=false;
    }
    
    return b;
}

void checkEven(int a)
{
    if(a & 1) cout << "The Given Number is Odd !!!"<<endl;
    else cout << "The Given Number is Even !!!"<<endl;
}

int main()
{
    int x ;
    cin >> x ;
    checkEven(x);
}