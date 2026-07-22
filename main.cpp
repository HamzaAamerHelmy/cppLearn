#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>
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

void readNumberOfElementsInArray(int &numOfElements)
{
    cout << "Enter Number Of Elements: ";
    cin >> numOfElements;
}
void fillArrayWithRandomNumbers(int arr[], int arrlen)
{
    for (int i = 0; i < arrlen; i++)
    {
        arr[i] = rand() % (100 - -100) + -100;
    }
}
int getFrequencyOfPositiveNumbers(int arr[], int arrlen)
{
    int frequency = 0;
    for (int i = 0; i < arrlen; i++)
    {
        if (arr[i] < 0)
        {
            frequency++;
        }
    }
    return frequency;
}
void printFrequency(int frequency)
{
    cout << "Positive Numbers Count is " << frequency << endl;
}
// srand((unsigned)time(NULL));
// int arrlen = 0;
// readNumberOfElementsInArray(arrlen);

// int arr[arrlen];

// fillArrayWithRandomNumbers(arr, arrlen);

// printArray(arr, arrlen);
// int frequency = getFrequencyOfPositiveNumbers(arr, arrlen);
// printFrequency(frequency);

void readNumber(float &number)
{
    cout << "Enter The Number: ";
    cin >> number;
}

float myAbs(float number)
{
    float positiveNumber = number - (number * 2);
    if (number >= 0)
    {
        return number;
    }

    return positiveNumber;
}
// float number = 0;
// readNumber(number);
// cout << "C++ abs function result: " << abs(number) << endl;
// cout << "My abs function result: " << myAbs(number) << endl;

float getFractionPart(float number)
{
    float fractionPart = number - int(number);
    return fractionPart;
}
int myRound(float number)
{
    int newNumber = 0;
    float fractionPart = getFractionPart(number);
    if (fractionPart > 0.5 || fractionPart < -0.5)
    {
        newNumber = number - 1;
        return newNumber;
    }
    else
    {
        return number;
    }
}
// float number = 0;
// readNumber(number);
// cout << "C++ round function result: " << round(number) << endl;
// cout << "My round function result: " << myRound(number) << endl;

float myfloor(float number)
{
    int intPart = int(number);

    if (intPart < 0)
    {
        if (number == intPart)
        {
            return intPart;
        }
        return intPart - 1;
    }

    return intPart;

    if (int(number) > 0)
    {
        return int(number);
    }
    else
    {
        return int(number) - 1;
    }
}
// float number = 0;
// readNumber(number);
// cout << "C++ floor function result: " << floor(number) << endl;
// cout << "My floor function result: " << myfloor(number) << endl;

float myceil(float number)
{
    int intPart = int(number);

    if (intPart < 0)
    {
        return intPart;
    }

    if (number != intPart)
    {
        return intPart + 1;
    }

    return intPart;
}
// float number = 0;
// readNumber(number);
// cout << "C++ Ceil function result: " << ceil(number) << endl;
// cout << "My Ceil function result: " << myceil(number) << endl;

int mysqrt(int number)
{
    int halfNumber = number / 2;

    int newNumber = pow(halfNumber, 2);
}

void RunApp()
{
    float number = 0;
    readNumber(number);
    cout << "C++ sqrt function result: " << sqrt(number) << endl;
    cout << "My sqrt function result: " << mysqrt(number) << endl;
}

int main()
{
    RunApp();

    return 0;
}