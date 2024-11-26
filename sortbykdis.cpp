#include<iostream>
#include<queue>

using namespace std;

int main(){
    vector<int> arr = {2, 6, 3, 12, 56, 8};
    int k =3;
    int minsz;
    if(arr.size() == k){
        minsz = k;
    }
    else{
        minsz = k+1;
    }

    priority_queue<int, vector<int>, greater<int>> pq(arr.begin(),arr.begin() + minsz);


    int indx =0;
    for(int i = k+1;i<arr.size();i++){
        arr[indx++] = pq.top();
        pq.pop();
        pq.push(arr[i]);
    }


    while(!pq.empty()){
        arr[indx++] = pq.top();
        pq.pop();

    }

    for(int j =0;j<arr.size();j++){
        cout<<arr[j]<<"\t";
    }

    return 0;
}