#include<bits/stdc++.h>
#include<iomanip>

using namespace std;




void mergeSort(vector<int> arr , int start , int end )
{

}
int main() {
    vector<int> array = {10, 5, 2, 0, 7, 6, 4};
    int s = 0 ;
    int e = array.size() - 1 ;
    

    mergeSort(array , s , e );
    for(int i = 0 ; i <= e ; i++)
    {
        cout<< array[i] << " , ";
    }
    return 0;
}