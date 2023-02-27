#include <iostream>
#include <cstdlib>
#include <cmath>
#include <fstream>
#include <string>

using namespace std;

void createHangman(string); // Creates hangman board with the correct amount of _.

int main()
{
    string keyWord = "";
    char lettguess = ' ';
    char CurrGuesses[26];
    bool stop = false;
    cout << "Welcome to Hangman! Please input key word to start: ";
    cin >> keyWord;

    createHangman(keyWord);

    return 0;
}

void createHangman(string word)
{
    for (int i = 0; i < word.length(); i++)
    {
        cout << "_ ";
    }
    cout << "\n\n   _____\n  |     |\n  |     \n  |     \n  |     \n  |     \n  |     \n__|__ ";
}