#include<iostream>
#include<queue>
#include<algorithm>
using namespace std;

int main(){
    
    int arr[] = {198, 76, 544, 123, 154, 675};
    int k =2;
    priority_queue<int> maxheap;
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i =0;i<n;i++){
        maxheap.push(arr[i]);

        if(maxheap.size()>k){
            maxheap.pop();
        }
    }
    int product =1;
    while (k!=0)
    {
        // cout<<maxheap.top();
       product *= maxheap.top();
       maxheap.pop();
       k--;
    }
    
    cout<<product;
    
    return 0;
    
}