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
void copyArray(int arr2[], int arr[], int &arr2length, int arrlength)
{
    for (int i = 0; i < arrlength; i++)
    {
        addArrayElement(arr2, arr[i], arr2length);
    }
}
void printArray(int arr[], int arrlength)
{
    for (int i = 0; i < arrlength; i++)
    {
        cout << arr[i] << " ";
    }
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

    copyArray(arr2, arr, arr2length, arrlength);
    cout << "Array 2 Elements: " << endl;
    printArray(arr2, arr2length);
}

int main()
{
    RunApp();

    return 0;
}