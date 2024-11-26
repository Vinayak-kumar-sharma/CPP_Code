#include<iostream>
using namespace std;
int getSwap(int *x,int *n){
    cout<<*x<< " new "<<*n<<endl;
    int temp;
    temp = *x;
    *x=*n;
    *n = temp;
    cout<<*x<<" "<<*n<<endl;
    return 0;
}

void swapping(int arr[],int n){
    // int s=0;
    // int e =n-1;
    // while(s<e){
    //     swap(arr[s],arr[e]);
    //     s++;
    //     e--;
    // }
    
    for(int i=0;i<n;i=i+2){
       if(i+1<n){
        getSwap(&arr[i],&arr[i+1]);
       }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[4] = {10,20,30,40};
    swapping(arr,4);
    return 0;

}