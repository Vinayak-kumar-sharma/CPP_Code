#include<iostream>
using namespace std;

int main(){
    int x = 150;
    int temp = x;
    int i =0;
    while(temp!=0){
        int d = temp%10;
        i = i*10 + d;
        temp = temp/10;
        cout<<i<<" "<<"new value to be module"<<temp<<endl;
    }
    if(i == x){
        cout<<"macthed"<<endl;
    }
    return 0;
}