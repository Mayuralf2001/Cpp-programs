#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream Myfiles("abc.txt");

    Myfiles<<"This is first file"<<endl;

    Myfiles.close();

    string myText;

    ifstream MyReadfile("abc.txt");

    while(getline(MyReadfile,myText))
    {
        cout<< myText <<endl;
    }

}
