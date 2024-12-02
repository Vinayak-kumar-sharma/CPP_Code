#include<iostream>
using namespace std;

int main(){
    int arr[] = {0,1,0,2,1,0,1,3,2,1,2,1,};
    int n = sizeof(arr)/sizeof(arr[0]);
    int left[n];
    int right[n];
    left[0] = arr[0];
    for(int i = 1;i<n;i++){
        left[i] = max(left[i-1],arr[i]);
    }
    for(int i=0;i<n;i++){
        cout<<" "<<left[i];
    }
    cout<<endl;
    right[n] = arr[n-1];
    for(int i = n-1;i>=0;i--){
        right[i] = max(right[i+1],arr[i]);
    }
    for(int i=0;i<n;i++){
        cout<<" "<<right[i];
    }

    cout<<endl;
    int ans =0;
    for(int i =0;i<n;i++){
        ans += (min(left[i],right[i])-arr[i]);
    }
    cout<<ans;

    return 0;

}