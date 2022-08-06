#include <iostream>
using namespace std;
int main()
{
    //Static Initialization
    int a[] = {1,2,3,4,5};
    for(int i=0;i<5;i++)
    {
        cout<<a[i]<<endl;
    }

    char c[] = {'h','e','l','l','o'};
    for(int i=0;i<5;i++)
    {
        cout<<c[i]<<" ";
    }

    cout<<endl;
    //Dynamic Initialization
    int b[5];
    cout<<"Enter the values :"<<endl;
    for(int i=0;i<5;i++)
    {
        cin>>b[i];
    }
    cout<<"Entered values in the array are :"<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<b[i];
    }
    return 0;
}
