#include<iostream>
using namespace std;
int main(){
    int x = 1234;
    int temp = x;
    int i =0;
    int j = 1;

    while(temp!=0){
         i = temp%10+i;
         j = temp%10*j;

        cout<<"values"<<i<<endl;
        temp /=10;
    }
    cout<<"Answer: Sum is "<<i<<" , Product is  "<<j<<endl;
    return 0;
}