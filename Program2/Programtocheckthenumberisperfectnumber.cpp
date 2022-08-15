#include <iostream>
using namespace std;
int main()
{
    int num,div,sum = 0;
    cout<<"Enter the number to check: "<<endl;
    cin>>num;
    for(int i=1;i<num;i++)
    {
        div = num % i;
        if(div == 0)
        {
            sum = sum + i;
        }
    }
    if(sum == num)
    {
        cout<<"Number is perfect number"<<endl;
    }
    else
    {
        cout<<"Number is a perfect number"<<endl;
    }
    return 0;
}
