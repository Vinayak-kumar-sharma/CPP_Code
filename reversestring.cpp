#include<bits/stdc++.h>

using namespace std;

int main(){

    string s = "Zero";
    stack<char> sr;
    int i=0;
    while (s[i]!='\0')
    {
        sr.push(s[i]);
        i++;
    }
    while(!sr.empty()){
        char x = sr.top();
        sr.pop();
        cout<<x<<" ";
    }

    return 0;
    
}