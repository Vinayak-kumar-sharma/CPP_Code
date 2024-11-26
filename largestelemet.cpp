#include<iostream>
#include<queue>
using namespace std;
int main(){
    int arr[10] = { 11,10,20,30,10,22,44,55,66,77};
    // int largest = -1;
    // int i =0;
    // while(i<10){
    //     if(largest<arr[i]){
    //         largest = arr[i];
    //     }
    //     i++;
    // }
    priority_queue<int> maxheap;

    for(int i =0; i<10;i++){
        maxheap.push(arr[i]);
    }

    cout<<"largest is :"<<maxheap.top();
    return 0;
}