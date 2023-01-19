#include <iostream>

using namespace std;

// method - 1
int pair_count(int a[], int n, int sum)
{
    int count = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] + a[j] == sum)
            {
                printf("%d + %d = %d\n", a[i], a[j], sum);
                count++;
            }
        }
    }
    return count;
}

// method - 2
// by hashing
int pair_count2(int A[], int n, int m, int sum)
{
    int count = 0;
    int H[m + 1] = {0};
    for (int i = 0; i < n; i++)
    {
        if (H[sum - A[i]] != 0)
        {
            printf("%d + %d = %d\n", A[i], sum - A[i], sum);
            count++;
        }
        H[A[i]]++;
    }
    return count;
}

int pair_count_sorted(int A[], int n, int sum)
{
    int i = 0, j = n - 1;
    int count = 0;
    while (i < j)
    {
        if (A[i] + A[j] == sum)
        {
            printf("%d + %d = %d\n", A[i], A[j], sum);
            i++;
            j--;
            count++;
        }
        else if (A[i] + A[j] < sum)
        {
            i++;
        }
        else
            j--;
    }
    return count;
}

int find_max(int A[], int n)
{
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        if (max < A[i])
            max = A[i];
    }
    return max;
}

int main()
{
    int n;
    printf("Enter array length ");
    cin >> n;

    int A[n];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    int sum = 10;
    cout << "number of pair whose sum is " << sum << " is "
         << pair_count(A, n, sum) << " total" << endl;

    int max = find_max(A, n);
    cout << "number of pair whose sum is " << sum << " is " << pair_count2(A, n, max, sum) << " total" << endl;

    cout << "number of pair whose sum is " << sum << " is " << pair_count_sorted(A, n, sum) << " total" << endl;
}