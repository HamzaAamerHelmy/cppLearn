#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int readNumberOfElements()
{
    int numberOfElements;
    cout << "Enter Number Of Elements Do you want from 1 to 100: ";
    cin >> numberOfElements;
    return numberOfElements;
}
void fillArrayWithRandomNumbers(int numberOfElements, int arr[])
{
    for (int i = 0; i < numberOfElements; i++)
    {
        arr[i] = rand() % (100 - 1) + 1;
    }
}
void printArray(int numberOfElements, int arr[])
{
    for (int i = 0; i < numberOfElements; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl
         << endl;
}
int readNumberToSearch()
{
    int numberToSearch;
    cout << "Enter Number To Search On It: ";
    cin >> numberToSearch;
    return numberToSearch;
}
int getIndexOfNumber(int numberToSearch, int arr[], int numberOfElements)
{
    for (int i = 0; i < numberOfElements; i++)
    {
        if (arr[i] == numberToSearch)
        {
            return i;
        }
    }
    return -1;
}
bool isExist(int numberToSearch, int position, int arr[])
{
    if (position <= 0)
    {
        return false;
    }
    return true;
}
void printExist(int position, int numberOfElements, int arr[], int numberToSearch)
{
    int orderOfNumber = position + 1;
    cout << "\nNumber you are Looking For is: " << numberToSearch << endl
         << endl;
    if (isExist(numberToSearch, position, arr))
    {
        cout << "The Number Is Found :)" << endl;
    }
    else
    {
        cout << "The Number Is Not Found :(" << endl;
    }
}

void RunApp()
{
    srand((unsigned)time(NULL));

    int numberOfElements = readNumberOfElements();

    int arr[numberOfElements];

    fillArrayWithRandomNumbers(numberOfElements, arr);

    printArray(numberOfElements, arr);

    int numberToSearch = readNumberToSearch();

    int position = getIndexOfNumber(numberToSearch, arr, numberOfElements);

    printExist(position, numberOfElements, arr, numberToSearch);
}

int main()
{
    RunApp();

    return 0;
}