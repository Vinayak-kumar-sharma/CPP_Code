#include<iostream>
using namespace std;
int main(){
    int a=10 , v=2 ,c=0;
    int z;
    if(a>v && v>c){
        z=a;
    }
    else if(a<v && c<v){
        z=v;
    }
    else{
        z=c;
    }
    cout<<"the output is : "<<z<<endl;
    
    return 0;
}