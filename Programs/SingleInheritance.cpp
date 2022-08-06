/*
Single Inheritance
*/
#include <iostream>
using namespace std;

class Vehicle
{
public:
    int mileage = 44;
    int cost = 500000;

    void print_car_details()
    {
        cout<<"The mileage of the car is :"<<mileage<<endl;
        cout<<"The cost of the car is :"<<cost<<endl;
    }
};

class Car : public Vehicle
{
public:
    string color = "white";
    int tyres = 4;

    void show_car_details()
    {
        cout<<"The color of the car is :"<<color<<endl;
        cout<<"Number of tyre in car is :"<<tyres<<endl;
    }
};

int main()
{
    Car c;
    c.show_car_details();
    c.print_car_details();
    return 0;
}
