// Chainging -->
// let hash function be h(x) = x % 10
// for every value of x like 16, 12, 25 ..... it stored in hash table
// so if the index is empty then it create new Node and store pointer to that index that points the Node
// and if it has already a value then it just add next to that Node
// for searching any key it uses hash function then traverse at that index till it
// find the key if NULL value reached then key is not present

// let no. of keys, n = 100 and size of hash table is 10
// Loading factor, lambda = n / size
// analysis of hash table is based on loading factor
// as each location has 10 keys so we are assuming that so searching an key,
// average successful time --> t = 1 (finding index using ahsh function) + lambda / 2
// average unsuccessful time --> t = 1 (finding index using ahsh function) + lambda

#include <iostream>
#include <stdio.h>

struct Node
{
    int data;
    struct Node *next;
};

void SortedInsert(struct Node **H, int x)
{
    struct Node *t, *q = NULL, *p = *H;
    t = (struct Node *)malloc(sizeof(struct Node));
    t->data = x;
    t->next = NULL;
    if (*H == NULL)
        *H = t;
    else
    {
        while (p && p->data < x)
        {
            q = p;
            p = p->next;
        }
        if (p == *H)
        {
            t->next = *H;
            *H = t;
        }
        else
        {
            t->next = q->next;
            q->next = t;
        }
    }
}

struct Node *Search(struct Node *p, int key)
{
    while (p != NULL)
    {
        if (key == p->data)
        {
            return p;
        }
        p = p->next;
    }
    return NULL;
}

int hash(int key)
{
    return key % 10;
}

void Insert(struct Node *H[], int key)
{
    int index = hash(key);
    SortedInsert(&H[index], key);
}

int main()
{
    struct Node *HT[10];
    struct Node *temp;
    int i;
    for (i = 0; i < 10; i++)
        HT[i] = NULL;
    Insert(HT, 12);
    Insert(HT, 22);
    Insert(HT, 42);
    temp = Search(HT[hash(22)], 22);
    printf("%d ", temp->data);
    return 0;
}