#include <iostream>
using namespace std;
int main()
{
    int num,count =0;
    cout<<"Enter the number: "<<endl;
    cin>>num;

    if(num == 0)
    {
        cout<<"Number is not a prime number."<<endl;
        exit(1);
    }
    for(int i=2;i < num; i++)
    {
        if(num % i == 0)
        {
            count ++;
        }
    }
    if(count>1)
    {
        cout<<"Number is not a prime number."<<endl;
    }
    else
    {
        cout<<"Number is a prime number."<<endl;
    }
    return 0;
}
