#include<iostream>
using namespace std;
int main(){
    int arr[10] = {44,44,44,44,44,44,44,44,44,44};
    int largest = -1;
    int secondLargest = -1;
    for(int i =0; i<10;i++){
        if(largest < arr[i]){
            secondLargest = largest;
            largest = arr[i];
        }
        else if(secondLargest < arr[i] && arr[i]!=largest){
            secondLargest =arr[i];
        }
    }
    if(secondLargest == -1){
        cout<<"....Output code not correct.."<<endl;
    }
    else{
        cout<<secondLargest<<" Value is finded."<<endl;
    }
    return 0;
}