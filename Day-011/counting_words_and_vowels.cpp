#include <iostream>
#include <stdio.h>

using namespace std;

void count(char *s)
{
    int vcount = 0, ccount = 0, word = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
            vcount++;
        else if ((s[i] >= 65 && s[i] <= 90) || (s[i] >= 97 && s[i] <= 122))
            ccount++;

        if (s[i] == ' ' && s[i - 1] != ' ')
            word++;
    }

    // continous space is called as white spaces

    cout << "vowel in string = " << vcount << endl;
    cout << "consonant in string = " << ccount << endl;
    cout << "words in string = " << word + 1 << endl;
}

int main()
{
    char s[] = "How are you";
    count(s);
}