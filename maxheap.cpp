#include<bits/stdc++.h>
using namespace std;
int main(){

/*
    finding the k the minimum element in the array.
    
*/


    priority_queue<int> maxheap;
    int arr[5] = {20,40,100,80,90};
    int k =2;
    for(int i = 0;i<5;i++){
        maxheap.push(arr[i]);
        if(i>=k){
            // cout<<maxheap.top();
            maxheap.pop();
        }
    }
    cout<<maxheap.top();
    return 0;
}