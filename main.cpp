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
        if (!isExist(newArr, newArrlength, arr[i]))
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

    cout << endl;
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

void readNumberOfElements(int &numOfElements)
{
    int userInput = 0;
    int tries = 2;
    do
    {

        cout << "How Elements do you want to enter(max 20): ";
        cin >> userInput;
        cout << endl;

        if (userInput > 20)
        {
            tries--;
            if (tries == 0)
            {
                cout << "You finished your tries :(" << endl;
                break;
            }

            cout << "Try Again!" << endl;
            cout << "Please enter a valid Number.." << endl;
            continue;
        }
        numOfElements = userInput;
        return;
    } while (tries > 0 || userInput > 20);
}

void readArray(int arr[], int size, int &arrlen)
{
    string userInput = "";
    string px = "";
    cout << "Enter Elements Of Array" << endl
         << endl;
    for (int i = 0; i < size; i++)
    {
        if (i < 9)
        {
            px = "0";
        }
        else
        {
            px = "";
        }
        cout << "Element[" << px << i + 1 << "] : ";
        cin >> arr[i];
        cout << "Do you want to stop reading array(yes : any key, no : 0): ";
        cin >> userInput;
        cout << endl;

        if (userInput == "0")
        {
            arrlen++;
            continue;
        }
        else
        {
            arrlen++;
            return;
        }
    }
    cout << endl;
}
void fillNewArrayWithReverse(int arr[], int arrlen, int newArr[])
{
    int counter = arrlen - 1;
    for (int i = 0; i < arrlen; i++)
    {
        newArr[i] = arr[counter];
        counter--;
    }
}
bool isPalindrome(int arr[], int arrlen, int newArr[])
{
    for (int i = 0; i < arrlen; i++)
    {
        if (newArr[i] == arr[i])
        {
            continue;
        }
        return false;
    }
    return true;
}
void printArrays(int arr[], int arrlen, int newArr[])
{
    cout << "(Palindrome is number that when read from left it's equal to read from right)" << endl;
    cout << "******************************" << endl;
    cout << "Array from left: ";
    printArray(arr, arrlen);

    cout << "\nArray from right: ";
    printArray(newArr, arrlen);
    cout << "******************************" << endl;
}
void printPalindrome(int arr[], int arrlen, int newArr[])
{
    if (isPalindrome(arr, arrlen, newArr))
    {
        cout << "\n\nYes array is Palindrome\n\n";
        printArrays(arr, arrlen, newArr);
    }
    else
    {
        cout << "\n\nNo array isn't Palindrome\n\n";
        printArrays(arr, arrlen, newArr);
    }
}

    // int elementsUserEnter = 0;
    // int sizeOfArray = 0;

    // readNumberOfElements(sizeOfArray);
    // if (sizeOfArray == 0)
    // {
    //     return;
    // }

    // int arr[sizeOfArray];

    // readArray(arr, sizeOfArray, elementsUserEnter);

    // int newArr[elementsUserEnter];
    // fillNewArrayWithReverse(arr, elementsUserEnter, newArr);

    // cout << "Array elements: " << endl;
    // printArray(arr, elementsUserEnter);

    // printPalindrome(arr, elementsUserEnter, newArr);


void RunApp()
{
}

int main()
{
    RunApp();

    return 0;
}