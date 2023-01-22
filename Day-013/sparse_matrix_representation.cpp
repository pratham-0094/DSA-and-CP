#include <iostream>
#include <stdio.h>

using namespace std;

struct Element
{
    int i;
    int j;
    int x;
};

struct Sparse
{
    int m;
    int n;
    int num;
    struct Element *e;
};

void create(struct Sparse *s)
{
    cout << "enter dimension" << endl;
    cin >> s->m >> s->n;
    cout << "enter number of non-zero element" << endl;
    cin >> s->num;
    s->e = new Element[s->num];
    cout << "enter elements" << endl;
    for (int i = 0; i < s->num; i++)
    {
        cin >> s->e[i].i;
        cin >> s->e[i].j;
        cin >> s->e[i].x;
    }
}

struct Sparse *add(Sparse *s1, Sparse *s2)
{
    Sparse *sum;

    // checking dimesion of two matrix are same or not
    if (s1->m != s2->m || s1->n != s2->n)
    {
        return 0;
    }

    // initializing matrix
    sum = new Sparse;
    sum->m = s1->m;
    sum->n = s1->n;
    sum->e = new Element[s1->num + s2->num]; // if all element are at different position then maximum sizeis total number of element, as if some empty same left out then it is not a big problem

    int i, j, k;
    i = j = k = 0;
    while (i < s1->num && j < s2->num)
    {
        if (s1->e[i].i < s2->e[j].i)
        {
            sum->e[k++] = s1->e[i++];
        }
        else if (s1->e[i].i > s2->e[j].i)
        {
            sum->e[k++] = s2->e[j++];
        }
        else
        {
            if (s1->e[i].j < s2->e[j].j)
            {
                sum->e[k++] = s1->e[i++];
            }
            else if (s1->e[i].j > s2->e[j].j)
            {
                sum->e[k++] = s2->e[j++];
            }
            else
            {
                // sum->e[k].i = s1->e[i].i;
                // sum->e[k].j = s1->e[i].j;
                // sum->e[k++].x = s1->e[i++].x + s2->e[j++].x;
                // or
                sum->e[k] = s1->e[i++];
                sum->e[k++].x += s2->e[j++].x;
            }
        }
    }
    for (; i < s1->num; i++)
        sum->e[k++] = s1->e[i++]; // add the remining 1st matrix element
    for (; j < s2->num; j++)
        sum->e[k++] = s2->e[j++]; // add the remining 2nd matrix element
    sum->num = k;

    return sum;
}

void display(Sparse *s)
{
    int k = 0;
    for (int i = 0; i < s->m; i++)
    {
        for (int j = 0; j < s->n; j++)
        {
            if (s->e[k].i == i && s->e[k].j == j)
            {
                cout << s->e[k++].x << ' ';
            }
            else
            {
                cout << 0 << ' ';
            }
        }
        cout << endl;
    }
}

int main()
{
    struct Sparse s1;
    cout << "1st matrix" << endl;
    create(&s1);
    struct Sparse s2;
    cout << "2nd matrix" << endl;
    create(&s2);
    Sparse *s3 = add(&s1, &s2);
    cout << "addition of the two matris is" << endl;
    display(s3);
}