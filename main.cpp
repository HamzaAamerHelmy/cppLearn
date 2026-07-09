#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

bool isDistinct(int arr[], int arrlen, int numberCheck)
{
    int frequency = 0;
    for (int i = 0; i < arrlen; i++)
    {
        if (frequency > 1)
        {
            return false;
        }
        if (numberCheck == arr[i])
        {
            frequency++;
        }
    }
    return true;
}

void extractDistinctNumbers(int arr[], int arrlen, int newArr[], int &newArrLen)
{
    for (int i = 0; i < arrlen; i++)
    {
        if (isDistinct(newArr, arrlen, arr[i]))
        {
            newArr[i] = arr[i];
            newArrLen++;
        }
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
    int arr[] = {10, 10, 10, 50, 50, 70, 70, 70, 70, 90};
    int arrlength = 10;
    int newArr[] = {};
    int newArrLength = 0;
    cout << "Array Elements: " << endl;
    printArray(arr, arrlength);

    extractDistinctNumbers(arr, arrlength, newArr, newArrLength);
    cout << "Array Distinct Elements: " << endl;

    printArray(newArr, newArrLength);
}

int main()
{
    RunApp();

    return 0;
}