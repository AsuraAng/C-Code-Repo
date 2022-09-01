#include <bits/stdc++.h>
#include <iomanip>

using namespace std;

int main()
{
    // using the cin.get() function to learn it compilation process
    // Here we are using temp char variable to store a single char and printing it out in from the input buffer
    // char sentence[1000];
    // char temp = cin.get();
    // int len = 1;

    // while (temp != '#')
    // {
    //     len++;
    //     cout << temp;
    //     temp = cin.get();
    // }
    // cout << "Length : " << len << endl;

    // Here we are using temp to store the char variables in the sentence array
    // char sentence[1000];
    // char temp = cin.get();
    // int len = 0;

    // while (temp != '#')
    // {
    //     sentence[len++] = temp;
    //     temp = cin.get();
    // }
    // sentence[len] = '\0';
    // cout << sentence;
    // cout << "Length : " << len << endl;

    // Now we are going to implement the first method to read a sentence from input buffer and then checking the each character of it
    // char ch;
    // ch = cin.get();
    // int alpha = 0 , space = 0, digit = 0 ;

    // while (ch!='\n') //Here remember that a character is defined by using '' to conver it into its ASCII value 
    // {
    //     if(ch>='0' && ch <='9') digit++;

    //     else if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z')) alpha++;

    //     else if(ch==' ' || ch == '\t') space++;

    //     ch = cin.get();
    // }

    // cout<< " Total Alphabets : " << alpha << endl;
    // cout<< " Total Digits : " << digit << endl;
    // cout<< " Total Spaces : " << space << endl;

    // using getline method to input sentences from the input buffer
    // char sentence[1000];
    // cin.getline(sentence , 1000);
    // cout<< sentence << endl;

    /*Exercise : 2 - Find Displacement : Given a long route containing N,S,E,W directions. Find the shortest path to reach the location?
    Sample Input : SNNNEWE
    Sample Output : NNE */
    char route[1000];
    cin.getline(route, 1000);

    int x = 0;
    int y = 0;

    for (int i = 0; route[i] != '\0'; i++)
    {
        switch (route[i])
        {
        case 'N':
            y++;
            break;
        case 'S':
            y--;
            break;
        case 'E':
            x++;
            break;
        case 'W':
            x--;
            break;
        }
    }

    if (x>=0 and y >=0){
        while(y--){
            cout<<"N";
        }
        while(x--){
            cout<<"E";
        }
    }

    return 0;
}