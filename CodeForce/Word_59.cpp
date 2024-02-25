#include <iostream>
#include <cctype>

using namespace std;

int main()
{
    string word;
    string wordToLowerCase;
    string wordToUpperCase;
    int upperCaseCount = 0;
    int lowerCaseCount = 0;
    int lengthOfword;
    cin >> word;

    lengthOfword = word.length();
    if (1 > lengthOfword or lengthOfword > 100)
    {
        return 0;
    }

    for (char leter : word)
    {
        if (isupper(leter))
            upperCaseCount++;

        if (islower(leter))
            lowerCaseCount++;

        wordToLowerCase += tolower(leter);
        wordToUpperCase += toupper(leter);
    }

    if (lowerCaseCount >= upperCaseCount)
    {
        cout << wordToLowerCase << endl;
    }
    else
    {
        cout << wordToUpperCase << endl;
    }

    return 0;
}