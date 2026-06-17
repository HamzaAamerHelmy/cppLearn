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
    int position = 0;
    for (int i = 0; i < numberOfElements; i++)
    {
        if (arr[i] == numberToSearch)
        {
            position = i;
            return position;
        }
    }
    return -1;
}
void printPositionAndOrder(int position, int numberOfElements, int arr[], int numberToSearch, int orderOfNumber)
{
    cout << "\nNumber you are Looking For is: " << numberToSearch << endl
         << endl;
    if (position <= 0)
    {
        cout << "The Number Is Not Found :(" << endl;
        return;
    }

    cout << "The Number Found at position: " << position << endl
         << endl;
    cout << "The Number Found it's order: " << orderOfNumber << endl
         << endl;
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

    int order = position + 1;
    printPositionAndOrder(position, numberOfElements, arr, numberToSearch, order);
}

int main()
{
    RunApp();

    return 0;
}