#include<iostream>
using namespace std;
//---------------------------------------------------------------------------------------------------
//
//  Function name   :   Multiplication
//  Input           :   Integer ,Integer
//  Output          :   Integer
//  Description     :   Perform Multiplication
//  Date            :   21/10/2026
//  Author          :   Sanika Sunil Jitkar
//
//---------------------------------------------------------------------------------------------------
int Multiplication( 
                    int iNo1,       //first parameter
                    int iNo2        //second parameter
                  )
{
    int iAns = 0;
    iAns = iNo1 * iNo2;
    return iAns;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    cout<<"Enter first:\n";
    cin>>iValue1;

    cout<<"Enter second:\n";
    cin>>iValue2;

    iRet =Multiplication(iValue1,iValue2);

    cout<<"Multiplication is: "<<iRet;

    return 0;
}