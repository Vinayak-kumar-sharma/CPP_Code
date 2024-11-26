#include<iostream>
using namespace std;
int main(){
    int arr[5] = {10,20,30,40,50};
    int x =2;
    int arry[5];
    for(int i =0; i<5;i++){
        arry[i] = arr[(i+x)%5];  // 0+2%5 = 2, 1+2 = 3%5 =3, 2+2=4=4%5=4, 3+2 = 5%5=0, 4+2=6%5=1, 5+2=7%5=2
    }
    for(int i =0; i<5;i++){
        // cout<<arr[i]<<" ";
        cout<<arry[i]<<" ";
    }
    return 0;
}