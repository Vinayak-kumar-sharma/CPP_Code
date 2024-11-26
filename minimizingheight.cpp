#include<iostream>
#include<queue>

using namespace std;

int main(){
    int arr[] = {-1,-2,-10,0,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int current = arr[0], global = arr[0], result = arr[0];

    for(int i = 1; i<n;i++){
        if(arr[i]<0){
          int temp;
          temp = current;
          current = global;
          global = temp;
        }

        current = max(arr[i],current*arr[i]);
        global = min(arr[i],global*arr[i]);

        result = max(result,current);
    }
    cout<<result;
    return 0;
}