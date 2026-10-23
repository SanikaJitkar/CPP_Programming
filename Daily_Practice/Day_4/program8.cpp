#include<iostream>
using namespace std;
//----------------------------------------------------------------------------------------------------
//
//  Function name   :   CalculateParkingCharge
//  Input           :   Integer 
//  Output          :   None
//  Description     :   Perform parking charges 
//  Date            :   23/10/2026
//  Author          :   Sanika Sunil Jitkar
//
//----------------------------------------------------------------------------------------------------
void CalculateParkingCharge(int iHours)
{
    int iCharges = 0;
    if(iHours > 0)
    {
        if(iHours <= 2)
        {
            iCharges = iHours * 20;
        }
        else if(iHours <= 5)
        {
            iCharges = (2 * 20) + ((iHours - 2) * 30);
        }
        else
        {
            iCharges = (2 * 20) + (3 * 30) + ((iHours - 5) * 50);
        }
        cout<<"Parking Charges :"<<iCharges;
    }
}
int main()
{
    int iHours = 0;

    cout<<"Enter Parking Hours:\n";
    cin>>iHours;

    CalculateParkingCharge(iHours);
    return 0;
}
