//Leap year program
#include<iostream>
using namespace std;
int main()
{
    int year;
    cout<<"Enter the year in yyyy format : "<<endl;
    cin>>year;

    if(year % 4 ==0)
    {
        cout<<"Year "<<year<<" is a leap year."<<endl;
    }
    else
    {
        cout<<"Year "<<year<<" is not a leap year."<<endl;
    }

    return 0;
}
