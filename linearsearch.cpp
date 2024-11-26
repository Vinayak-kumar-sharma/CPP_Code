#include<iostream>
using namespace std;
int main(){
    int arr[10] = {-1,-2,0,1,2,3,0,4,5,10};
    int n =-1;
    for (int i =0; i<10;i++){
        if(arr[i] == n){
            cout<<"Machted"<<endl;
            return 0;
        }
    }
    return -1;
}