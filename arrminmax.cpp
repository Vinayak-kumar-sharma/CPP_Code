#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int getmax(int arr[], int n){
    int z=INT_MIN;
    for(int i =0;i<n;i++){
        if(z<arr[i]){ 
            z=arr[i];
        }
    }
    return z;

}
int getmin(int arr[], int n){
    int z = INT_MAX;
    for(int i=0; i<n; i++){
        if(z>arr[i]){
            z=arr[i];
        }
    }
    return z;
}


int main(){
    int arr[5];
    for(int i = 0; i<5;i++){
        cin>>arr[i];
    }
    cout<<"Max value is: "<<getmax(arr,5)<<endl;
    cout<<"Min. value is: "<<getmin(arr,5)<<endl;
    return 0;
}