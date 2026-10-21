#include<iostream>
using namespace std;
//---------------------------------------------------------------------------------------------------
//
//  Function name   :   EvenOdd
//  Input           :   Integer 
//  Output          :   Boolean
//  Description     :   Perform even or odd number
//  Date            :   21/10/2026
//  Author          :   Sanika Sunil Jitkar
//
//---------------------------------------------------------------------------------------------------

bool EvenOdd(int iNo)
{
    if(iNo % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{

    int iValue = 0; 
    bool iResult = false;
    cout<<"Enter number:\n";
    cin>>iValue;

    iResult = EvenOdd(iValue);

    if(iResult == true)
    {
        cout<<"Even Number.";
    }
    else
    {
        cout<<"Odd Number.";
    }

    return 0;
}