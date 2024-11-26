#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1,0,0,0,0};
    int n = 2;
    int len = sizeof(arr)/sizeof(arr[0]);
    // cout<<len;
    int i = 0;
    while(n!=0 && i < len){
        if(arr[i] == 1){
            i += 2;
            cout<<"[ "<<"Here Not flowered...."<<" ]";
        }
        else if(arr[i-1] == 1 || arr[i+1] == 1){
            i+=2;
            cout<<"Bhai "<<endl;
        }
        else if(i == len-1 && arr[i] == 1){
            cout<<"Not flowered....";
        }
        else {
            n--;
            i += 2;
            cout<<"[ "<<"flowered...."<<" ]";

        }
    }
    return 0;
}