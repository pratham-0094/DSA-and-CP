#include <iostream>
#include <cmath>

using namespace std;

// this is used for sorting of very large list
// the is idea behind this is, if we try to shuffle few elements then they will get quickly sorted
// time complexity = O(nlog(n))
// code is similar to Insertion Sort with some modifications
void ShellSort(int A[], int n)
{
    for (int gap = n / 2; gap >= 1; gap /= 2)
    {
        for (int j = gap; j < n; j++)
        {
            int temp = A[j];
            int i = j - gap;
            while (i >= 0 && A[i] > temp)
            {
                A[i + gap] = A[i];
                i = i - gap;
            }
            A[i + gap] = temp;
        }
    }
}

int main()
{
    int A[] = {237, 146, 259, 348, 152, 163, 235, 48, 36, 62};
    int n = sizeof(A) / sizeof(A[0]);

    ShellSort(A, n);
    cout << "displaying array element" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
    return 0;
}