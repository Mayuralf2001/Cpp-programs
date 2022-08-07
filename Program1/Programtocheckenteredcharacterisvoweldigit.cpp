//Entered character is vowel, digit, special symbol
#include<iostream>
#include<ctype.h>
using namespace std;
int main()
{
    char c;
    cout<<"Enter the character :"<<endl;
    cin>>c;

    if(isdigit(c))
    {
        cout<<"Entered character is digit."<<endl;
    }
    else if(isalpha(c))
    {
        if((c == 'A') || (c == 'E') || (c == 'I') || (c == 'O') || (c == 'U') ||
            (c == 'a') || (c == 'e') || (c == 'i') || (c == 'o') || (c == 'u'))
        {
            cout<<"Entered character is vowel."<<endl;
        }
        else
        {
            cout<<"Entered character is not a vowel."<<endl;
        }
    }
    else
    {
        cout<<"Entered character is a special character."<<endl;
    }

    return 0;
}
