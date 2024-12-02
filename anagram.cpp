#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main(){
    string s1 ="s";
    string s2 ="k";
    // bool isAnagram =false;

    int i = s1.length();
    int j = s2.length();

    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());

    // s1==s2?isAnagram =true:false;
    if(s1!=s2){
        cout<<"False";
    }
    else{
        cout<<"True";
    }
    // cout<<isAnagram;
    return 0;
}