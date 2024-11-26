#include <iostream>
using namespace std;

int main()
{
    cout << "Enter user name : " << endl;
    string user;
    int num ;
    cin>>user ;
    cout << " ---- Welcome ---- " << user << " !" << endl;
    cout << " > Press 1 for the Multiplication. " << endl;
    cout << " > Press 2 for the Addition. " << endl;
    cout << " > Press 3 for the Substraction. " << endl;
    cout << " > Press 4 for the division. " << endl;
    cout << "Enter your choice for the calculation menu ( 1 - 4 ) : ";
    cin>>num;
    cout<<endl;
    if(num == 1) {
        int x , y;
        cout<< " Enter the number : " ;
        cin>> x;
        cout<< " Enter the another number: ";
        cin>>y;
        cout<<" out put is .. : "<<x*y<<endl;
    }
    else if(num == 2) { 
        int x , y;
        cout<< " Enter the number : " ;
        cin>> x;
        cout<< " Enter the another number: ";
        cin>>y;
        cout<<" out put is .. : "<<x+y<<endl;
    }
    else if(num == 3) {
        int x , y;
        cout<< " Enter the number : " ;
        cin>> x;
        cout<< " Enter the another number: ";
        cin>>y;
        cout<<" out put is .. : "<<x-y<<endl;
    }
    else if(num == 4) {
        int x , y;
        cout<< " Enter the number : " ;
        cin>> x;
        cout<< " Enter the another number: ";
        cin>>y;
        cout<<" out put is .. : "<<x/y<<endl;
    }

    else {
        cout<< " --- Enter valid number ---- ";
    }

    return 0;
}
