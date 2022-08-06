#include<iostream>
using namespace std;
int main()
{
    int num,count = 0;

    cout<<"Enter the number :"<<endl;
    cin>>num;

    if(num == 0)
    {
        cout<<"The number entered is not prime"<<endl;
        exit(1);
    }
    else
    {
        for(int i=2;i<num;i++)
        {
            if(num % i == 0)
            {
                count++;
            }
        }
    }
    if(count>1)
    {
        cout<<"The number is not prime."<<endl;
    }
    else
    {
        cout<<"The number is prime."<<endl;
    }

    return 0;
}
