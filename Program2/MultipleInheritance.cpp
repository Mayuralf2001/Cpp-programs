#include<iostream>
using namespace std;

class Parent1
{
public:

    void show1()
    {
        cout<<"This is show 1"<<endl;
    }
};

class Parent2
{
public:
    void show2()
    {
        cout<<"This is show 2"<<endl;
    }
};

class Child:public Parent1,public Parent2
{
public:
    void show3()
    {
        cout<<"This is child show 3"<<endl;
    }
};
int main()
{
    Child c1;
    c1.show3();
    c1.show2();
    c1.show1();

    return 0;
}
