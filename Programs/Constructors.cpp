#include<iostream>
using namespace std;

class MyClass
{
public:
    int a;
    int b;
    MyClass(int x,int y)
    {
        a = x;
        b = y;
    }

    void print()
    {
        cout<<"a: "<<a<<endl;
        cout<<"b: "<<b<<endl;
    }

};
int main()
{
    MyClass c1(10,20);
    c1.print();
    return 0;
}
