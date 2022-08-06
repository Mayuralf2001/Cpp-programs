#include<iostream>
using namespace std;

int add(int x,int y)
{
    return x+y;
}
double add(double x,double y)
{
    return x+y;
}

int main()
{
    cout<<"Addition: "<<add(10,10)<<endl;
    cout<<"Addition double: "<<add(10.0,1.);
    return 0;
}
