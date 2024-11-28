#include<iostream>

#include<stack>

#include<vector>

using namespace std;

int main(){

    stack<int> s ;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);
    s.push(7);
    s.push(8);
    s.push(9);
    s.push(10);

    stack<int> result;

    int n = s.size();

    int i = 0;
    
    while(i<n/2){
        int x = s.top();
        s.pop();
        result.push(x);
        i++;
        
    }
    
    s.pop();
    
    while(!result.empty()){
      
        s.push(result.top());
      
        result.pop();
    }
    
    for(int i=0;i<n-1;i++){
    
        cout<<s.top()<<" ";
    
        s.pop();
    
    }

    return 0;

}

