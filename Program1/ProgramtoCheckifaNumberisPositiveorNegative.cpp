#include <iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the number to check :"<<endl;
    cin>>num;

    if(num >=0)
    {
        cout<<num<<" Number is positive."<<endl;
    }
    else
    {
        cout<<num<<" Number is negative."<<endl;
    }

    return 0;
}
