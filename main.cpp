#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

void readNumberOfElements(int &arrlength)
{
    cout << "Enter Number Of Elements: ";
    cin >> arrlength;
}

void fillArrayWithRandomNumbers(int arr[100], int arrlength, int from, int to)
{
    for (int i = 0; i < arrlength; i++)
    {
        arr[i] = rand() % (to - from) + from;
    }
}

void addArrayElement(int arr[], int number, int &arrlength)
{
    arrlength++;
    arr[arrlength - 1] = number;
}

bool isPrime(int number)
{
    for (int i = 2; i <= (number / 2); i++)
    {
        if (number % i == 0)
        {
            return false;
        }
    }
    return true;
}

void copyPrimeNumbersFromArray(int arr2[], int arr[], int &arr2length, int arrlength)
{
    int counter = 0;
    for (int i = 0; i < arrlength; i++)
    {
        if (isPrime(arr[i]))
        {
            addArrayElement(arr2, arr[i], counter);
        }
    }
    arr2length = counter;
}

void printArray(int arr[], int arrlength)
{
    for (int i = 0; i < arrlength; i++)
        cout << arr[i] << " ";

    cout << endl
         << endl;
}

void RunApp()
{
    // Seed Random Number Generator
    srand((unsigned)time(NULL));

    // Assign Original Array Length
    int arrlength = 0;
    readNumberOfElements(arrlength);

    // Print Origin Array Length
    cout << "Origin Arr length: " << arrlength << endl;
    
    // Fill Original Array
    int arr[100];
    fillArrayWithRandomNumbers(arr, arrlength, 21, -1);

    // Print Origin Array Elemnts
    cout << "Origin Array Elements: " << endl;
    printArray(arr, arrlength);
    

    // Extract Prime Numbers From origin Array to new Array
    int arr2[100], arr2length = 0;
    copyPrimeNumbersFromArray(arr2, arr, arr2length, arrlength);
    
    // Print Prime's Array
    cout << "Prime's Array Elements: " << endl;
    printArray(arr2, arr2length);
}

int main()
{
    RunApp();

    return 0;
}