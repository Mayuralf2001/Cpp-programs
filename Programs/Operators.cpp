#include <iostream>
using namespace std;

int main()
{
    int num1,num2;
    //arithmatic operators
    cout<<"Enter value of 1st number :"<<endl;
    cin>>num1;

    cout<<"Enter value of 2nd number :"<<endl;
    cin>>num2;

    cout<<"Pre-increment :"<< ++num1<<endl;
    cout<<"Post-increment :"<< num2++ <<endl;

    //logical operators
    bool a = true;
    bool b = false;

    cout<< (a&&b)<<endl;
    cout<< (a||b)<<endl;

    //relational operator
    if(num1>num2)
    {
        cout<<"1st number is greater than 2nd number"<<endl;
    }
    else if(num1<num2)
    {
        cout<<"1st number is less than 2nd number"<<endl;
    }
    else
    {
        cout<<"1st number is equal to 2nd number"<<endl;
    }


    return 0;
}
