#include<iostream>
using namespace std;

int main()
{
    char cName[20];
    int iAge = 0;
    float fMarks = 0.0f;

    cout<<"Enter your name:\n";
    cin>>cName;

    cout<<"Enter your Age:\n";
    cin>>iAge;

    cout<<"Enter your marks:\n";
    cin>>fMarks;

    cout<<"Name:"<<cName<<"\n";
    cout<<"Age:"<<iAge<<"\n";
    cout<<"Marks:"<<fMarks<<"\n";

    return 0;
}