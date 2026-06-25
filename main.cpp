#include <iostream>
#include <string>
#include <cstdlib>
#include <thread>
#include <chrono>
using namespace std;

void addArrayElement(int arr[], int number, int &arrlength)
{
    arrlength++;
    arr[arrlength - 1] = number;
}


void RunApp()
{
    
}

int main()
{
    RunApp();

    return 0;
}