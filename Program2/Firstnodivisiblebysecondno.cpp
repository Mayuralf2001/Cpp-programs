#include<iostream>
using namespace std;
int main()
{
    int first,second;
    cout<<"Enter the numbers: "<<endl;
    cin>>first;
    cin>>second;

    if(first % second ==0)
    {
        cout<<"The first number is divisible by second number."<<endl;
    }
    else
    {
        cout<<"The first number is not divisible not second number."<<endl;
    }
}
