#include<bits/stdc++.h>
using namespace std;

int main() {

    string s1 = "1101";
    string s2 = "1010";

    int l1 = s1.length()-1;
    int l2 = s2.length()-1;

    int carry = 0;
    string result="";

    while (l1 >= 0 || l2 >= 0 || carry)
    {
        int A = l1>=0?s1[l1] - '0': 0;
        int B = l2>=0?s2[l2] - '0': 0;

        int sum = A + B + carry;

        result += (sum%2) + '0';

        carry = sum/2;

        l1--;
        l2--;
    }
    int j =0;
    reverse(result.begin(),result.end());
    while(j < result.length() && result[j] == '0'){
        j++;
    }
    if(j == result.length()){
        return 0;
    }

    cout<<result<<endl;

    return 0;
}