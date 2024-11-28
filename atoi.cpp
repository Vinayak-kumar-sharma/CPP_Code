#include<iostream>

using namespace std;

int main(){
    
    string s = " -123" ; 

    int INT_MAX = 2147483648;

     int INT_MIN = -2147483647;

    int i = 0;

    int result = 0;

    bool isPositive = true;

    while(s[i] == ' '){
        i++;
    }
    if(s[i] == '-'){
        isPositive = false;
        i++;
    }

    else if(s[i] == '+'){
        i++;
    }

    while(s[i]!='\0'){
        if(s[i]>='0' && s[i]<='9'){
            
            int digit = s[i] - '0';

            if(result > (INT_MAX - digit)/10){
                return isPositive ? INT_MAX : INT_MIN;
            }

            result = result * 10 + digit ;
        }

        i++;


    }

    cout<<result<<endl;
    return 0;
}