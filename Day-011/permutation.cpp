#include <iostream>

using namespace std;

// method - 1
void per1(char s[], int k)
{
    static int a[10] = {0};
    static char res[10] = {};
    int i;
    if (s[k] == '\0')
    {
        res[k] = '\0';
        cout << res << endl;
    }
    else
    {
        for (i = 0; s[i] != '\0'; i++)
        {
            if (a[i] == 0)
            {
                res[k] = s[i];
                a[i] = 1;
                per1(s, k + 1);
                a[i] = 0;
            }
        }
    }
}

void swap(char *a, char *b)
{
    char temp = *a;
    *a = *b;
    *b = temp;
}

// method - 2
void per2(char s[], int l, int h)
{
    int i;
    if (l == h)
    {
        cout << s << endl;
    }
    else
    {
        for (i = l; i <= h; i++)
        {
            swap(s[l], s[i]);
            per2(s, l + 1, h);
            swap(s[l], s[i]);
        }
    }
}

int main()
{
    char s[] = "ABC";
    cout << "permutation of " << s << " is" << endl;
    per1(s, 0);
    cout << "permutation of " << s << " is" << endl;
    per2(s, 0, 2);
}

// permutation - all arrangement of given string
// example
// ABC - ABC ACB BAC BCA CAB CBA
// n! arrangement possible

// state space tree - tree representing all various possible solution
// brute force - finding out all possible values