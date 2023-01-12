// time complexity --> the amount of time required for performing computation task
// depends of procedure that we are adopting

// space completxity --> how much space is consumed in main memory during the execution of a program

void swap(int x, int y)
{
    int t;
    t = x; // -------- 1
    x = y; // -------- 1
    y = t; // -------- 1

    // f(n) = 3 n ^ 0
    // O(n ^ 0) = O(n)
}

int sum(int A[], int n)
{
    int s = 0;                  // --------------------- 1
    for (int i = 0; i < n; i++) // --------------------- n + 1
    {
        s = s + A[i]; // --------------------- n
    }
    return s;

    // f(n) = 2 n ^ 1 + 3
    // O(n)
}

void add(int n)
{
    for (int i = i; i < n; i++) // --------------------- n + 1
    {

        for (int j = 0; j < n; j++) // --------------------- n * (n + 1)
        {
            // C[i][j] = A[i][j] + B[i][j]; // --------------------- n * n
        }
    }

    // f(n) = 2 n ^ 2 + 2 n + 1
    // O(n) = n  ^ 2
}