//Reverse the entered number
#include<iostream>
using namespace std;
int main()
{
    int number,reversed_num = 0,remainder;

    cout<<"Enter the number :"<<endl;
    cin>>number;

    while(number!=0)
    {
        remainder = number % 10;
        reversed_num = reversed_num * 10 + remainder;
        number /=10;
    }
    cout<<"Reversed Number is :"<<reversed_num<<endl;

    return 0;
}
