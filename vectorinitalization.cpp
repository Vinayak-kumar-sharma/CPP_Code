#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> g;
    for(int i =0; i<5; i++){
        g.push_back(i);
        cout<<"Values is pushed :"<<endl<<g[i]<<endl        ;
    }
    return 0;

}