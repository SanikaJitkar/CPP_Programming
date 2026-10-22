#include<iostream>
using namespace std;
//----------------------------------------------------------------------------------------------------
//
//  Function name   :   AreaofCircle
//  Input           :   Integer 
//  Output          :   float
//  Description     :   Perform area of circle
//  Date            :   22/10/2026
//  Author          :   Sanika Sunil Jitkar
//
//----------------------------------------------------------------------------------------------------
float AreaofCircle(int iNo)
{
    float const fpi = 3.14f;
    float iAns = 0.0f;
    iAns = fpi *((iNo)*(iNo));
    return iAns;
}
int main()
{
    int iValue = 0;
    float fArea = 0.0f;

    cout<<"Enter radius of circle:\n";
    cin>>iValue;

    fArea = AreaofCircle(iValue);

    cout<<"Area of circle :\n"<<fArea;
    return 0;
}