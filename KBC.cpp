#include<bits/stdc++.h>
#include<iomanip>

using namespace std;

int main() {
    printf("Welcome to QUIZ!\n");
    printf("Rules :\n");

    unordered_map<int , string> questions;
    unordered_map<int , string[]> options;
    unordered_map<int , char>answers;
    unordered_map<int , string>amount;

    amount[7]="3,00,000";
    amount[8]="4,00,000";
    amount[9]="6,00,000";
    amount[10]="10,00,000";
    amount[6]="80,000";
    amount[5]="40,000";
    amount[4]="20,000";
    amount[3]="10,000";
    amount[2]="5000";
    amount[1]="1000";


    string amountwon = "0";

    unordered_map<int , string>:: iterator itr;

    
    
    questions[7] = "Which is the largest COFFEE producing state in INDIA ?" ;
    string list[] = {"A. Karnataka", "B. Arunachal Pradesh","C. Tamil Nadu","D. Kerala"};
    string* options[7] = &list;
    answers[7] = 'A' ;

    // questions[8] = "Which state has the largest Area ?" ;
    // string list[] = {"A. Maharashtra", "B. Madhya Pradesh","C. Uttar Pradesh","D. Rajasthan"};
    // string* options[8] = &list;
    // answers[8] = 'D' ;

    // questions[9] = "Which state has the largest Population ?" ;
    // string list[] = {"A. Maharashtra", "B. Uttar Pradesh","C. Bihar","D. Andhra Pradesh"};
    // string *options[9] = &list;
    // answers[9] = 'B' ;

    // questions[10] = "In which state is Elephanta Falls located ?" ;
    // string list[] = {"A. Mizoram", "B. Orissa","C. Meghalaya","D. Manipur"};
    // string* options[10] = &list;
    // answers[10] = 'C' ;

    // questions[6] = "In which state the main language is Khasi ?" ;
    // string list[] = {"A. Mizoram", "B. Nagaland","C. Meghalaya","D. Tripura"};
    // string* options[6] = &list;
    // answers[6] = 'C' ;

    // questions[5] = "Which of the following states is not located in NORTH ?" ;
    // string list[] = {"A. Jammu & Kashmir", "B. Himachal Pradesh","C. Haryana","D. Jharkhand"};
    // string* options[5] = &list;
    // answers[5] = 'D' ;

    // questions[4] = "What is the state flower of Haryana ?" ;
    // string list[] = {"A. Rhododendron", "B. Golden Shower","C. Lotus","D. None of these"};
    // string* options[4] = &list;
    // answers[4] = 'C' ;

    // questions[3] = "What is the main languages spoken in Andhra Pradesh ?" ;
    // string list[] = {"A. English & Telugu", "B. Telugu & Urdu","C. Telugu & Kannada","D. All of these"};
    // string* options[3] = &list;
    // answers[3] = 'B' ;

    // questions[2] = "Which of the following is the capital of Arunachal Pradesh ?" ;
    // string list[] = {"A. Itanagar", "B. Dispur","C. Imphal","D. Panaji"};
    // string* options[2] = &list;
    // answers[2] = 'A' ;

    // questions[1] = "India is a Federal Union of Twenty-Nine states and How many Union Territories ?" ;
    // string list[] = {"A. 6", "B. 7","C. 8","D. 9"};
    // string* options[1] = &list;
    // answers[1] = 'B' ;
    
    for (itr = questions.begin() ; itr != questions.end()  ; itr++)
    {
        cout << itr->first << " " << itr->second << endl ;
    }
       

    return 0;
}