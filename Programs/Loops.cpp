//Program to print even numbers from 1 to n;
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the n number"<<endl;
    cin>>n;
    cout<<"Even numbers :"<<endl;
    int i=0;
    for(i;i<=n;i++)
    {
        if(i%2==0){
            cout<<i<<" "<<endl;
        }
    }
    return 0;
}
