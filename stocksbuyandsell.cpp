#include<iostream>
using namespace std;
int main(){
    int array[5] = {4,2,2,2,4};
    int totalprofit =0;
    for(int i = 1;i<5;i++){
        if(array[i]>array[i-1]){
            totalprofit+=array[i]-array[i-1];

        }
    }
    cout<<"Profit is>> "<<totalprofit;
    return 0;
}