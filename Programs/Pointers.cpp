#include<iostream>
#include<string>
using namespace std;
int main()
{
    string name = "Mayur Tawade";

    string *ptr = &name;

    cout<<"Value of variable :"<<name<<endl;

    cout<<"\nAddress of variable :"<<ptr<<endl;

    cout<<"\nAddress of variable :"<<&name<<endl;

    return 0;
}
