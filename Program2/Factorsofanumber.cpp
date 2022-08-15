#include <iostream>
using namespace std;
int main()
{
    int number,temp=1;
    cout<<"Enter the number:"<<endl;
    cin>>number;

    cout<<"Factors are:"<<endl;
    while(temp<=number)
    {
        if(not(number%temp))
        {
            cout<<temp<<endl;
        }
        temp++;
    }
    cout<<endl;
}
