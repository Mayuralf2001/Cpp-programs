#include<iostream>
using namespace std;

void onecomps(int num)
{
    int rem;
    if(num <= 1)
    {
        cout<<!num;
        return;
    }
    rem = num % 2;
    onecomps(num/2);
    cout<<!rem;

}
int main()
{
    int dec,bin;
    cout<<"Enter the number:"<<endl;
    cin>>dec;
    if(dec<0)
    {
        cout<<"Number is not a positive number"<<endl;
    }
    else
    {
        cout<<"The ones complement of the number "<<dec<<" is "<<endl;
        onecomps(dec);
    }
    return 0;
}
