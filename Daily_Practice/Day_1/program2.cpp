#include<iostream>
using namespace std;
//---------------------------------------------------------------------------------------------------
//
//  Function name   :   Addition
//  Input           :   Integer ,Integer
//  Output          :   Integer
//  Description     :   Perform addition
//  Date            :   21/10/2026
//  Author          :   Sanika Sunil Jitkar
//
//---------------------------------------------------------------------------------------------------
int Addition(
                int iNo1,       //first parameter
                int iNo2        //second parameter
            )
{
    int iAns = 0;
    iAns = iNo1 +iNo2;
    return iAns;
}

int main()
{
    int iValue1=0,iValue2=0, iResult=0;

    cout<<"Enter first number :";
    cin>>iValue1;

    cout<<"Enter second number";
    cin>>iValue2;

    iResult = Addition(iValue1,iValue2);

    cout<<"Addition is ="<<iResult;

    return 0;
}
