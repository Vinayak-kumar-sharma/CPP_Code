#include<iostream>
using namespace std;
int main(){
    int arr[5] = {3,0,4,0,5};
    int zeroesatthebac = 0;
    
    // for(int i =0;i<5;i++){
    //     for(int j=i+1;j<5;j++){
    //         if(arr[j] == 0 ){
    //             swap(arr[j],arr[i]);
    //         }
    //     }
    // }
    
    for(int i =0;i<5;i++){
        if(arr[i]!=0)
         swap(arr[zeroesatthebac++],arr[i]);

    }
    for(int i =0 ; i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0;

}