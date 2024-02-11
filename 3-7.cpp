/*
Suppose A, B, C are arrays of integers of size M, N, and M + N respectively. The numbers in array A
appear in ascending order while the numbers in array B appear in descending order. Write a user
defined function in C++ to produce third array C by merging arrays A and B in ascending order. Use A,
B and C as arguments in the function.
*/

#include <iostream>
using namespace std;

void mergeArrays(int A[], int B[], int C[], int M, int N)
{
    int i = 0, j = N - 1, k = 0;
    while (i < M && j >= 0)
    {
        if (A[i] < B[j])
        {
            C[k++] = A[i++];
        }
        else
        {
            C[k++] = B[j--];
        }
    }
    while (i < M)
    {
        C[k++] = A[i++];
    }
    while (j >= 0)
    {
        C[k++] = B[j--];
    }
}

int main()
{
    int M, N;
    cout << "Enter the size of array A: ";
    cin >> M;
    cout << "Enter the size of array B: ";
    cin >> N;
    int A[M], B[N], C[M + N];
    cout << "Enter the elements of array A: ";
    for (int i = 0; i < M; i++)
    {
        cin >> A[i];
    }
    cout << "Enter the elements of array B: ";
    for (int i = 0; i < N; i++)
    {
        cin >> B[i];
    }
    mergeArrays(A, B, C, M, N);
    cout << "The merged array is: ";
    for (int i = 0; i < M + N; i++)
    {
        cout << C[i] << " ";
    }
    cout << endl;
    return 0;
}

