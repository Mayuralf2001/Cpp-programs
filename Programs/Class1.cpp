#include<iostream>
using namespace std;

class Student
{
public:
    int id;
    string name;

    void put_details(int i,string n)
    {
        id = i;
        name = n;
    }

    void get_details()
    {
        cout<<"Id :"<<id<<endl;
        cout<<"Name :"<<name<<endl;
    }
};
int main()
{
    int s_id;
    string s_name;
    Student s1;

    cout<<"Enter the id of Student :"<<endl;
    cin>>s_id;

    cout<<"Enter the name of Student :"<<endl;
    cin>>s_name;

    s1.put_details(s_id,s_name);
    s1.get_details();
    return 0;
}
