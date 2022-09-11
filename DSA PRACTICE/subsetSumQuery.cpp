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

// Funcions for changing the bits
int getIthBit(int n , int i)
{
    int mask = (1<<i);
    return (n & mask) > ? 1 : 0;
}

int setIthBit(int &n , int i)
{
    int mask = ~(1<<i);
    n = n|mask;
}

void clearIthBit(int &n ,int i)
{
    int mask = ~(1<<i);
    n = n & mask ;
}

// To Be Studied and Implemented
void updateIthBit(int &n , int i , int v)
{
    clearIthBit(n,i);
    int mask = (v<<i);
    n = n|mask;
}

int clearLastIthBitss(int &n ,int i)
{
    int mask = (-1<<i);
    n = n & mask;
}

int clearBitsInRange(int &n ,int i ,int j)
{
    int a = (~0)<<(j+1);
    int b = (1<<i)-1;
    int mask = a | b;
    n = n & mask;
}

void checkPower2(int n)
{
    if((n&(n-1))==0)
    {
        cout << "The Given Number is a Power of 2"<<endl;
    }
    else 
    {
        cout << "The Given Number is NOt the Power of 2"<<endl;
    }
}

void clearBithInRange(int &n , int i , itn j)
{
    int a = (~0)<<(j+1);
    int b = (1<<i)-1;
    int mask = a | b;
    n = n&mask;
}

void replaceBitsInRange(int &n , int i , int j , int m)
{
    clearBitsInRange(n , i , j);
    int mask = (m<<i);
    n = n | mask;
}

int count_bits(int n)
{
    int count = 0;
    while(n>0)
    {
        int last_bit = (n&1);
        count += last_bit;
        n = n>>1;
    }
    return count;
}

int converToBinary(int n)
{
    int ans = 0 ;
    int p = 1 ;
    while(n>0)
    {
        int last_bit = n&1;
        ans += p*last_bit;

        p = p*10;
        n = n >> 1;
    }
    return ans;
}

int count_bits_hack(int n)
{
    int ans = 0;
    while(n>0)
    {
        n = n&(n-1);
        ans++;
    }
    return ans;
}

int fastExpo(int a ,int n)
{
    int ans = 1 ;
    while(n>0)
    {
        int last_bit=n&1;
        if(last_bit)
        {
            ans = ans*a;
        }
        a = a*a;
        n = n >>1;
    }
    return ans;
}


int main()
{
    int x ;
    cin >> x ;
    checkEven(x);
}
