#include <iostream>
using namespace std;

class GrandParent
{
public:
    string name;

    void get_name(string n)
    {
        name = n;
    }

    void put_name()
    {
        cout<<"Name is :"<<name<<endl;
    }

};

class Parent:public GrandParent
{
public:
    int age;

    void get_age(int a)
    {
        age = a;
    }

    void put_age()
    {
        cout<<"Age is :"<<age<<endl;
    }
};

class Child:public Parent
{
public:
    string gender;

    void get_gender(string g)
    {
        gender = g;
    }

    void put_gender()
    {
        cout<<"Gender is :"<<gender<<endl;
    }
};

int main()
{
    Child c;
    c.get_name("Mayur");
    c.put_name();

    c.get_age(19);
    c.put_age();

    c.get_gender("Male");
    c.put_gender();
    return 0;
}
