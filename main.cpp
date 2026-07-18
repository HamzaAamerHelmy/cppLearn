#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

bool isUnique(int arr[], int arrlen, int numberCheck)
{
    int frequency = 0;
    for (int i = 0; i < arrlen; i++)
    {
        if (numberCheck == arr[i])
        {
            frequency++;
        }
        
        if (frequency > 1)
        {
            return false;
        }
    }
    return true;
}
bool isExist(int arr[], int arrlen, int numberCheck)
{
    for (int i = 0; i < arrlen; i++)
    {
        if (arr[i] == numberCheck)
        {
            return true;
        }
    }
    return false;
}
void extractDistinctNumbers(int arr[], int arrlen, int newArr[], int &newArrlength)
{
    for (int i = 0; i < arrlen; i++)
    {
        // Add number to new arr if not exist.
        if (!isExist(newArr, arrlen, arr[i]))
        {
            newArr[newArrlength] = arr[i];
            newArrlength++;
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
// int arr[] = {10, 10, 10, 50, 50, 70, 70, 70, 70, 90};
// int arrlength = sizeof(arr) / sizeof(arr[0]);
// int newArr[arrlength];
// int newArrLength = 0;

// cout << "Array Elements: " << endl;
// printArray(arr, arrlength);

// extractDistinctNumbers(arr, arrlength, newArr, newArrLength);
// cout << "Array Distinct Elements: " << endl;

// printArray(newArr, newArrLength);



void RunApp()
{
}

int main()
{
    RunApp();

    return 0;
}