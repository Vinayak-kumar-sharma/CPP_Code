// This code have some strructure code ralated issue


#include<iostream>
using namespace std;
int main(){
    struct Pair {
        int min;
        int max;
    };
    Pair getminmax(int arr[] , int n){
        struct Pair minmax;
        int i;
        if(n==1){
            minmax.max = arr[0];
            minmax.min = arr[0];
            return minmax;
        }
        if(arr[0] > arr[1]) {
            minmax.max = arr[0];
            minmax.min = arr[1]
        }
        else {
            minmax.max = arr[0];
            minmax.min = arr[1];
        }

    }
    return 0;
}