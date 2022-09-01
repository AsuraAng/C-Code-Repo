// Game Creaters :-  ANUGRAH YADAV (2K21/B13/46) and ANSHUL KHANDELWAL (2K21/B13/45)

#include <iostream>
#include <string>
#include <cstring>
#include <iomanip> //***************find out about these header files*******************

using namespace std;

void in_movie(char movie[500]);  // function declaration of function to input the movie
void in_type(char type[10]);     // function declaration of function to input the type of movie
void disp_type(char type[10]);   // function declaration of function to display the type of movie
void game_easy(char movie[500]); // function declaration of function that runs the easy level of the entire game
void game_hard(char movie[500]); // function declaration of function that runs the hard level of the entire game
int choice_d();                  // function declaration of function that takes the users choice of levels
int player_num();                // function declaration of function that asks user for the number of players playing the game
void singleplayer();             // function declaration of function that runs the single player game
void menu();                     // function declaration of menu function
void rules();                    // function declaration of function that displays the rules of the game

int main() // main function
{
    menu(); // calling the menu function
    return 0;
}

void menu() // function definition of menu function
{
start:
    cout << setw(100) << "MENU" << endl;
    cout << "Menu Options are as follows : " << endl;
    cout << "1. Rules" << endl;
    cout << "2. Start" << endl;
    int i;
    cin >> i;
    if (i == 1)
    {
        rules();
        goto start;
    }
    else if (i == 2)
    {
        char movie[500];       // character array to store movie name
        char type[10];         // character array to store movie type
        int no = player_num(); // getting the number of players
        if (no == 2)           // loop for 2 player game
        {
        again:
            int j = choice_d(); // calling function to get the difficulty of the game from the user
            disp_type(type);    // calling function to display the movie type
            in_type(type);      // calling function to input the type of movie
            in_movie(movie);    // calling function to input the movie name
            if (j == 0)
            {
                game_easy(movie); // calling function to run the easy difficulty of the game
            }
            else
            {
                game_hard(movie); // calling function to run the hard difficulty of the game
            }
            cout << "Are You Up For Another Round ?" << endl;
            cout << "Select Y if you want to Play again and Press any other Character to Exit" << endl;
            char ch;
            cin >> ch;
            if (ch == 'Y')
            {
                goto again;
            }
            else
            {
                return;
            }
        }
        else // loop for single player game
        {
            singleplayer();
            return;
        }
    }
}

int choice_d() // function definition of function that takes the user's choice of levels
{
back:
    cout << "Enter the Difficulty Level at which you want to play" << endl
         << "Enter B for basic level and A for Advanced level" << endl;
    char ch;
    cin >> ch;
    if (ch == 'A')
    {
        return 1;
    }
    else if (ch == 'B')
    {
        return 0;
    }
    else
    {
        cout << "Wrong Choice Entered" << endl;
        goto back;
    }
}

void in_movie(char movie[500]) // function defintion of function to input the movie
{
    cout << "Please Enter the Movie Name " << endl;
    gets(movie); // inputting the movie name
    return;
}

void in_type(char type[10]) // function definition of function to input the type of movie
{
    cout << "Enter the Type of the Movie " << endl;
    gets(type);
    return;
}

void disp_type(char type[10]) // function definition of function to display the type of movie
{
    cout << type << endl;
}

void game_easy(char movie[500])
{
    int chances = 9, j = 0, score = 0, count1 = 0;
    char temp[500];
    char choices[100];
    strcpy(temp, movie);

    for (int i = 0; temp[i] != '\0'; i++) // making changes to the temp array as per the requirements of the game... \0 is the indicator of termination of a character string.
    {
        if (temp[i] == 65 or temp[i] == 69 or temp[i] == 73 or temp[i] == 79 or temp[i] == 85 || temp[i] == 97 or temp[i] == 101 or temp[i] == 105 or temp[i] == 111 or temp[i] == 117 or temp[i] == 32) // if loop to check if the particular character is a vowel or not + space
        {
            continue;
        }
        else
        {
            temp[i] = '_';
        }
    }

    cout << "Your Movie is : " << temp << endl << endl;

    for (int i = 0; temp[i] != '\0'; i++)
    {
        if (temp[i] == '_')
        {
            count1++;
        }
    }

    while (chances > 0 and count1 > 0)
    {
        int count = 0, count2 = 0;
        cout << "Chances left are : " << chances << endl;
        cout << "Please enter your choice " << endl;
        cin >> choices[j];
        for (int i = 0; temp[i] != '\0'; i++)
        {
            if (choices[j] == movie[i] or choices[j] == movie[i] + 32 and temp[i] == '_')
            {
                temp[i] = movie[i];
                count++; // keeping track of the changes made, if any
            }
        }
        if (count == 0) // since no changes were made, entered choice was wrong
        {
            cout << "Wrong Choice" << endl;
            chances--;
        }
        for (int i = 0; temp[i] != '\0'; i++)
        {
            if (temp[i] == '_') // keeping track of the letters remaining to be discovered
            {
                count2++;
            }
        }
        count1 = count2;
        cout << endl;
        cout << "Your Movie is Now" << endl
             << endl;
        ;
        cout << temp << endl
             << endl;
        j++;
    }
    score = chances;
    cout << "Your Score is " << score << endl;
    cout << "Press 1 to view the choices entered by you " << endl;
    int rand;
    cin >> rand;
    if (rand == 1)
    {
        for (j = 0; choices[j] != '\0'; j++)
        {
            cout << choices[j] << "," << setw(2);
        }
    }
}

void game_hard(char movie[500])
{
    int countv = 0, countc = 0;
    for (int i = 0; movie[i] != '\0'; i++)
    {
        if (movie[i] == 65 or movie[i] == 69 or movie[i] == 73 or movie[i] == 79 or movie[i] == 85 || movie[i] == 97 or movie[i] == 101 or movie[i] == 105 or movie[i] == 111 or movie[i] == 117) // if loop to check if the particular character is a vowel or not
        {
            countv++;
        }
        else if (movie[i] != 32) // not counting spaces
        {
            countc++;
        }
    }
    if (countc > countv)
    {
        game_easy(movie);
    }

    else
    {
        int chances = 9, j = 0, score = 0, count1 = 0;
        char temp[500];
        char choices[100];
        strcpy(temp, movie);
        for (int i = 0; temp[i] != '\0'; i++)
        {
            if (temp[i] == 65 or temp[i] == 69 or temp[i] == 73 or temp[i] == 79 or temp[i] == 85 || temp[i] == 97 or temp[i] == 101 or temp[i] == 105 or temp[i] == 111 or temp[i] == 117) // if loop to check if the particular character is a vowel or not
            {
                temp[i] = '_';
            }
        }
        for (int i = 0; temp[i] != '\0'; i++)
        {
            if (temp[i] == '_')
            {
                count1++;
            }
        }
        cout << temp << endl
             << endl; // displaying the movie before the game starts
        while (chances > 0 and count1 > 0)
        {
            int count = 0, count2 = 0;
            cout << "Chances left are : " << chances << endl;
            cout << "Please enter your choice " << endl;
            cin >> choices[j];
            cout << endl;
            for (int i = 0; movie[i] != '\0'; i++)
            {
                if (choices[j] == movie[i] or choices[j] == movie[i] + 32 and temp[i] == '_')
                {
                    temp[i] = movie[i];
                    count++;
                }
            }
            if (count == 0)
            {
                cout << "Wrong Choice" << endl;
                chances--;
            }
            for (int i = 0; temp[i] != '\0'; i++)
            {
                if (temp[i] == '_')
                {
                    count2++;
                }
            }
            count1 = count2;
            cout << "Your Movie is Now" << endl;
            cout << temp << endl;
            j++;
        }
        score = chances;
        cout << "Your Score is " << score << endl;
        cout << " Press 1 to view the choices entered by you " << endl;
        int rand;
        cin >> rand;
        if (rand == 1)
        {
            for (j = 0; choices[j] != '\0'; j++)
            {
                cout << choices[j] << "," << setw(2);
            }
        }
    }
}

int player_num() // function definition of function that inputs the number of players
{
    cout << "Enter Number of Players" << endl;
    cout << "Max Players allowed are 2 and Minimum is 1" << endl;
    int ch;
    cin >> ch;
    if (ch == 2)
    {
        return 2;
    }
    else if (ch == 1)
    {
        return 1;
    }
    else
    {
        return 2; // setting the default as a 2 player game
    }
}

void singleplayer() // function definition of function that runs the single player game
{
    cout << setw(100) << "Single Player" << endl;
    char bollywood[15][50] = {"Ram Teri Ganga Maili", // declaration and initialisation of array with bollywood movies
                              "Pk",
                              "MS Dhoni The Untold Story",
                              "Qayamat se Qayamat Tak",
                              "Hum saath saath hain",
                              "Kabhi Khushi Kabhi Gham",
                              "Bajrangi Bhaijaan",
                              "Aashiqui",
                              "Rang De Basanti",
                              "Sachin A Billion Dreams",
                              "Dilwale Dulhania Le Jayenge",
                              "Kabhi Khushi Kabhie Gham",
                              "Paan Singh Tomar",
                              "Baahubali The Conclusion ",
                              "Golmaal: Fun Unlimited"};
    char hollywood[15][50] = {"Mission Impossible Ghost Protocol", // declaration and initialisation of array with hollywood movies
                              "The Avengers Infinity War",
                              "The Fast and the Furious Tokyo Drift",
                              "Spiderman",
                              "The Dark Knight Rises",
                              "V for Vendetta",
                              "The Prestige",
                              "Silence Of The Lambs",
                              "The Fantastic Four Rise of The Silver Surfer",
                              "Alvin and the Chipmunks",
                              "The Godfather",
                              "The Shawshank Redemption",
                              "The Devils Advocate",
                              "Mad Max Redemption",
                              "The Matrix"};
    char temp[500];
    char ch;
choice:
    cout << "Enter B for Bollywood Movies and H for Hollywood Movies" << endl;
    cin >> ch; // getting the type for which the player wants to play
    if (ch != 'H' and ch != 'B')
    {
        cout << "Wrong Choice!" << endl;
        goto choice;
    }
    cout << "Enter a number between 1 and 15" << endl;
    int i, j = 0;
    cin >> i; // making the user select the movie
    int row = i - 1, col;
    if (ch == 'H')
    {
        strcpy(temp, hollywood[row]);
    }
    else
    {
        strcpy(temp, bollywood[row]);
    }

    int c = choice_d(); // calling function to get the difficulty of the game from the user
    if (c == 0)
    {
        game_easy(temp);
    }
    else
    {
        game_hard(temp);
    }
    cout << endl
         << "Enter Y to Play Again" << endl;
    cin >> ch;
    if (ch == 'Y')
    {
        goto choice;
    }
    else
    {
        return;
    }
    cout << endl;
}

void rules() // function definition of function that displays the rules of the game
{
    cout << setw(100) << "Rules" << endl;
    cout << setw(100) << "1.General Rules" << endl;
    cout << "* When you enter the Game the first thing you see is the Menu" << endl;
    cout << "  Enter 1 to See the Rules and 2 to Start the Game" << endl;
    cout << "* Once you start the Game by pressing 2, you will be asked for the number of players" << endl;
    cout << "  Select 1 for Singleplayer and 2 for Multiplayer " << endl;
    cout << "  If you enter a random value then the game has Multiplayer as the Default Setting " << endl;
    cout << "* The Core Principle of the Game is that given a Movie (either entered by another player or given to you by the Computer)" << endl;
    cout << "  it will be displayed with certain alphabets not visible to you. Given the type of the movie(that is to which industry the movie belongs) and the " << endl;
    cout << "   alphabets visible to you, you have to decode the full name of the movie within 9 wrong choices." << endl;
    cout << "* You will enter the alphabets that you believe might fit into the Movie's name. If the alphabet is correct then the movie will be displayed now with all" << endl;
    cout << "  instances of the entered letter" << endl;
    cout << "  If the entered letter is wrong then a message will be displayed on screen telling you that the letter is wrong and you will lose one chance" << endl;
    cout << "  The game ends when you have either exhausted all your choices(losing the game) or you have guessed the movie correctly" << endl;
    cout << "* After Completion of the game your score is displayed on the screen and you have a choice to view the alphabets you have entered: whether incorrectly or correctly" << endl;
    cout << "* Read on to find the Specifics regarding the Multiplayer, Single Player and Miscellaneous Rules and absolutely do not forget to have a GOOD TIME :)" << endl;
    cout << endl
         << endl;
    cout << setw(100) << "1. Multiplayer Rules " << endl;
    cout << "* If you are Playing the Multiplayer Mode then first of all you are Asked about the Difficulty at which you want to play at " << endl;
    cout << "  If you want to play at basic difficulty then Enter B and if you want to play at Advanced Difficulty then Enter A" << endl;
    cout << "* The first player enters the type of the movie that is whether it is Hollywood or Bollywood" << endl;
    cout << "  After that the Player will enter the Name of the Movie " << endl;
    cout << "* Now, if the Basic Difficulty has been selected then the only the vowels in the movies given shall be visible to the second player and they have to " << endl;
    cout << "  guess all the remaining characters" << endl;
    cout << "  If the Advanced Difficulty has been selected then out of vowels and consonants, whichever category is more in number shall be hidden and the other category" << endl;
    cout << "  shall be visible" << endl;
    cout << "* Now the second player has to guess the letters and get the full movie" << endl;
    cout << endl
         << endl;
    cout << setw(100) << "2. Singleplayer Rules " << endl;
    cout << "* If you are playing the singleplayer version then you shall be provided a movie by the Computer" << endl;
    cout << "* First of all you will be asked if you want to play with a Hollywood Movie or a Bollywood Movie" << endl;
    cout << "* Once you have selected the type of the movie you will then be asked about the Difficulty at which you want to play" << endl;
    cout << "* Post this the Game proceeds in a manner similar to the Multiplayer Game" << endl;
    cout << endl
         << endl;
    cout << setw(100) << "3. Miscellaneous Rules " << endl;
    cout << "* All choices must be entered in lower case only, if you enter them in upper case, then it will be deemed as incorrect" << endl;
    cout << "* Once you enter a letter and it is correct then all the instances of the letter will be highlighted. However, if you enter such a letter again " << endl;
    cout << "  then it will be deemed as incorrect and you will lose a chance" << endl;
    cout << "  Please do not enter any special characters(-,?/* etc.) while you are giving the name of the movie" << endl;
    return;
}