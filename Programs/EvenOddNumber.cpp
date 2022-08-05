#include<iostream>
using namespace std;
int main()
{
    int number;
    cout<<"Enter the number :"<<endl;
    cin>>number;

    if(number %2 ==0)
    {
        cout<<"The number entered by you is even"<<endl;
    }
    if(number %2 !=0)
    {
        cout<<"The number entered by you is odd"<<endl;
    }
    return 0;
}
