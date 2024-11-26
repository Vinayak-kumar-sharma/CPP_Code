#include<iostream>
using namespace std;
int main(){
    // 1,2,3,4,3,2,1
    int arr[5] = {9,9,1,2,2};  // for even values of xor it give different answer....
    int ans =0;
    for(int i =0;i<5;i++){
        ans = ans^arr[i];
    }
    cout<<ans<<endl;
    return 0;
}