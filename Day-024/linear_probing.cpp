// Linear probing --> Insert key at index obtained from hash function h(x) = x % 10
// if inplace is already occupied then we use another hash function
// h'(x) = ( h(x)  + f(i) ) % 10 where f(i) = i, i = 0, 1, 2 ...
// as we find next index or empty space then checking with every index no. of collision is more

//  when we search for key we use h(x) = x % 10
// so it search at that index then search next index, that is time taking
// searching for value that is not in hash table, stop when you found an empty place
// average successful time --> t = ( 1 / lambda ) ( log( 1 / (1 - lambda) ) )
// average unsuccessful time --> t = 1 / ( 1 - lambda )

// important
// loading factor <= 0.5
// if size of hash table is 10, then we connot add more than 5 keys

// disadvantages -->
// lot of key accumulating at one place and forming a cluster, form a single group, known as primary clustering
// delete is not easy as some element store at position that is empty, so directly delete the index
// we have to move the elements that are below it, that is known to be Rehashing
// or we can just take out all elements and agin insert them that takes lot of efforts
// that's why we don't prefer deletion in linear probing

#include <stdio.h>
#define SIZE 10

int hash(int key)
{
    return key % SIZE;
}

int probe(int H[], int key)
{
    int index = hash(key);
    int i = 0;
    while (H[(index + i) % SIZE] != 0)
        i++;
    return (index + i) % SIZE;
}

void Insert(int H[], int key)
{
    int index = hash(key);
    if (H[index] != 0)
        index = probe(H, key);
    H[index] = key;
}

int Search(int H[], int key)
{
    int index = hash(key);
    int i = 0;
    while (H[(index + i) % SIZE] != key)
        i++;
    return (index + i) % SIZE;
}

int main()
{
    int HT[10] = {0};
    Insert(HT, 12);
    Insert(HT, 25);
    Insert(HT, 35);
    Insert(HT, 26);
    printf("Key found at %d\n", Search(HT, 35));
    return 0;
}