#include <bits/stdc++.h>
#include <iomanip>

using namespace std;


// string compressString(string str){
//     int n = str.length();
//     string output;

//     for (int i = 0; i < n; i++)
//     {
//         int count = 1 ;
//         while(i< n - 1 && str[i+1] == str[i]){
//             count++;
//             i++;
//         }
//         output += str[i];// syntax to add string to the string 
//         output += to_string(count); // syntax to add integer to the string 
//     }

//     if(ouput.length()>=str.length()){
//         return str;
//     }

//     return output ;    
// }


// int compress(vector<char> *chars){
//     int n = chars.size();
//     string ans ;
//     for (int  i = 0; i < n ; i++)
//     {
//         int count = 1 ;
//         while(i < chars.size()-1 && chars[i]==chars[i+1]){
//             count++;
//             i++;
//         }
//         ans += chars[i];
//         if(count != 1)
//         {
//             ans += to_string(count);
//         }
//     }

//     chars->clear();

//     for (int i = 0; i < ans.length(); i++)
//     {
//         chars->push_back(ans[i]);
//     }
//     return ans.length();    
    
// }

int main()
{
    // usin strcpy method for char Data Type

    // char paragraph[50000];
    // cin.getline(paragraph , 50000);

    // char str2[50000];
    // strcpy(str2, paragraph); //hence strcpy is a function used for char datatype
    // cout << paragraph <<"\n----------------------------No string-------------------------------" <<endl;
    // cout << str2 << "\n----------------------------No string-------------------------------" <<endl;

    // using the strlen method for char DATA TYPE

    // char sentence [90000];
    // cin.getline(sentence , 90000);
    // int alpha = 0 ;
    // int spaces = 0 ;

    // for (int i = 0; i < strlen(sentence); i++)
    // {
    //     if((sentence[i]>='a'&&sentence[i]<='z')||(sentence[i]>='A'&&sentence[i]<='Z')){
    //         alpha++;
    //     }
    //     else if (sentence[i]==' '){
    //         spaces++;
    //     }
    // }

    // cout << "\nThe sentence is : "<< sentence << endl;
    // cout << "The Alphabet count in the sentence is : "<< alpha << endl;
    // cout << "The Spaces count in the sentence is : "<< spaces << endl;

    // using strcat method for char Data Type

    // char str1 [10000];
    // char str2 [10000];
    // cout<< "Enter the first character Array : "<<endl;
    // cin.getline(str1 , 10000);
    // cout<< "Enter the second character Array : "<<endl;
    // cin.getline(str2 , 10000);

    // cout << "The Concatinated form of these given arrays : \n";
    // cout << strcat(str1 , str2);

    // using strcmp method for char Data Type
    // char sentence[500];
    // char sentenceCopy[500];
    // string sentenceNotCopy;
    // char myOwnText[500];
    // char sentenceNotCopy_[1000];


    // cout << "Enter a Sentence from Web : \n";
    // cin.getline(sentence, 1000);
    // strcpy(sentenceCopy, sentence);
    // cout << "Enter Your Own Text : \n";
    // cin.getline(myOwnText, 1000);
    // sentenceNotCopy = strcat(sentence, myOwnText);

    // for (int i = 0; i < sentenceNotCopy.length(); i++)
    // {
    //     sentenceNotCopy_[i]=sentenceNotCopy[i];
    // }
    
    // int cmp1 = strcmp(sentence, sentenceCopy);
    // int cmp2 = strcmp(sentence, sentenceNotCopy_);
    // int cmp3 = strcmp(sentence, myOwnText);

    // cout << "The returned value from the Method for sentence and sentenceCopy is : " << cmp1 << endl;
    // cout << "The returned value from the Method for sentence and sentenceNotCopy is : " << cmp2 << endl;
    // cout << "The returned value from the Method for sentence and myOwnText is : " << cmp3 << endl;


    
    
    
    return 0;
}