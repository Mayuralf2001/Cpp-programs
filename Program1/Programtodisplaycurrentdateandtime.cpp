//Display current date and time
#include <iostream>
#include<ctime>
using namespace std;
int main()
{
    time_t today;
    time(&today);
    cout<<"Calender date and time as per today is :"<<asctime(localtime(&today));
    return 0;

}
