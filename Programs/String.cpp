#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char str1[] = "Mayur";
    char str2[] = " Tawade";

    cout<<"Concatenation :"<<strcat(str1,str2);

    cout<<"\nString Copy :"<<strcpy(str1,str2);

    cout<<"\nString 2 :"<<str2;
    cout<<"\nString length :"<<strlen(str2);

    return 0;
}
