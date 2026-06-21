#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

void readNumberOfElements(int &arrlength)
{
    cout << "Enter Number Of Elements: ";
    cin >> arrlength;
}
void fillArrayWithRandomNumbers(int arr[100], int arrlength)
{
    for (int i = 0; i < arrlength; i++)
    {
        arr[i] = rand() % (100 - 1) + 1;
    }
}
void addArrayElement(int arr[], int number, int &arrlength)
{
    arrlength++;
    arr[arrlength - 1] = number;
}
void copyPrimeNumbersFromArray(int arr2[], int arr[], int &arr2length, int arrlength)
{
    int counter = 2;
    for (int i = 0; i < arrlength; i++)
    {
        if (arr[i] % counter == 0)
        {
            continue;
        }
        addArrayElement(arr2, arr[i - 2], arr2length);
    }
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
    srand((unsigned)time(NULL));
    int arr[100], arrlength;
    int arr2[100], arr2length = 0;
    readNumberOfElements(arrlength);

    fillArrayWithRandomNumbers(arr, arrlength);
    cout << "Array 1 Elements: " << endl;
    printArray(arr, arrlength);

    copyPrimeNumbersFromArray(arr2, arr, arr2length, arrlength);
    cout << "Array 2 Odd Elements: " << endl;
    printArray(arr2, arr2length);
}

int main()
{
    RunApp();

    return 0;
}