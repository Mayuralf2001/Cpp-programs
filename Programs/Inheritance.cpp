#include<iostream>
using namespace std;

class Dimensions
{
public:
    float num = 4.0;
};

class Square : public Dimensions
{
public:
    double area(double num1)
    {
        return num1 * num1;
    }
};
int main()
{
    Square s;
    cout<<"Area of square :"<<s.area(s.num)<<endl;
    return 0;
}
