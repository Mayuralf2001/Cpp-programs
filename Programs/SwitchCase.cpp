#include <iostream>
using namespace std;

int main()
{
    for(int i=0;i<=10;i++){
        cout<<"Enter your value between range 1 to 10: "<<endl;
        cin>>i;

        switch(i){

            case 1:
                cout<<"You entered number 1"<<endl;
                break;
            case 2:
                cout<<"You entered number 2"<<endl;
                break;
            case 3:
                cout<<"You entered number 3"<<endl;
                break;
            case 4:
                cout<<"You entered number 4"<<endl;
                break;
            case 5:
                cout<<"You entered number 5"<<endl;
                break;
            case 6:
                cout<<"You entered number 6"<<endl;
                break;
            case 7:
                cout<<"You entered number 7"<<endl;
                break;
            case 8:
                cout<<"You entered number 8"<<endl;
                break;
            case 9:
                cout<<"You entered number 9"<<endl;
                break;
            case 10:
                cout<<"You entered number 10"<<endl;
                break;
            default:
                cout<<"You entered number out of range"<<endl;
                break;
                }
            return 0;
        }

}
