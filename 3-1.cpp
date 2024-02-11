/*
Write a menu driven C++ program with following option
a. Accept elements of an array
b. Display elements of an array
c. Sort the array using insertion sort method
d. Sort the array using selection sort method
e. Sort the array using bubble sort method
*/

#include <iostream>
using namespace std;

void accept(int arr[], int n)
{
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}

void display(int arr[], int n)
{
    cout << "The elements of the array are: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void insertionSort(int arr[], int n)
{
    int key, j;
    for (int i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

void selectionSort(int arr[], int n)
{
    int i, j, minIndex;
    for (i = 0; i < n - 1; i++)
    {
        minIndex = i;
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        swap(arr[minIndex], arr[i]);
    }
}

void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main()
{
    int n, choice;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    do
    {
        cout << "1. Accept elements of an array" << endl;
        cout << "2. Display elements of an array" << endl;
        cout << "3. Sort the array using insertion sort method" << endl;
        cout << "4. Sort the array using selection sort method" << endl;
        cout << "5. Sort the array using bubble sort method" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            accept(arr, n);
            break;
        case 2:
            display(arr, n);
            break;
        case 3:
            insertionSort(arr, n);
            cout << "The array has been sorted using insertion sort method." << endl;
            break;
        case 4:
            selectionSort(arr, n);
            cout << "The array has been sorted using selection sort method." << endl;
            break;
        case 5:
            bubbleSort(arr, n);
            cout << "The array has been sorted using bubble sort method." << endl;
            break;
        case 6:
            cout << "Exiting the program." << endl;
            break;
        default:
            cout << "Invalid choice." << endl;
        }
    } while (choice != 6);
    return 0;
}