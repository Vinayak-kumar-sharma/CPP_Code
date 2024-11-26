#include<iostream>
using namespace std;

int main(){
    int arr[7] = {8, -8, 9, -9, 10, -11, 12};
    int current = arr[0], global = arr[0];
    int maxSum= 0,minSum=0;
    int sum =0;

    for(int i =0; i<7;i++){
        maxSum = max(arr[i],maxSum+arr[i]);
        current = max(current,maxSum);

        minSum = min(minSum+arr[i],arr[i]);
        global = min(global,minSum);

        sum += arr[i];

    }

    int normal = current;
    int circular = sum-global;
    if(sum == global){
        return normal;
    }

    cout<<max(circular,normal);
    return 0;
}