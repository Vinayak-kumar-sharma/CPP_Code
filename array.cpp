#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int arr[] = {3,5,4,1,9};
    int n =5;
    sort(arr,arr+n);
    int min = arr[0];
    int max = arr[n-1];
    cout<<min<<"    &   "<<max<<endl;
    return 0;
}
