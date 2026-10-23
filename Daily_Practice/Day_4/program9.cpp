#include<iostream>
using namespace std;
//----------------------------------------------------------------------------------------------------
//
//  Function name   :   CheckYear
//  Input           :   Integer 
//  Output          :   Boolean
//  Description     :   Perform year is Leap or Not 
//  Date            :   23/10/2026
//  Author          :   Sanika Sunil Jitkar
//
//----------------------------------------------------------------------------------------------------
bool CheckYear(int iYear)
{
    if(iYear > 0)
    {
        if((iYear % 400 == 0) || (iYear % 4 == 0) && (iYear % 100 != 0))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    return false;
}
int main()
{
    int iYear = 0;
    bool bRet = false;

    cout<<"Enter Year:\n";
    cin>>iYear;

    bRet = CheckYear(iYear);

    if(bRet == true)
    {
        cout<<iYear<<" is Leap Year:";
    }
    else
    {
        cout<<iYear<<" is Not Leap Year:";
    }

    return 0;
}
