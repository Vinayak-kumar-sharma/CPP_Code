#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s = "banana";
    int len = s.length();

    for (int i = 0; i < len; i++)
    {
        bool falsetrue = false;
        for (int j = 0; j < len; j++)
        {
            if (s[i] == s[j] && i != j)
            {
                falsetrue = true;
                break;
            }
        }
        if(!falsetrue){
            cout<<s[i];
            return 0;
        }
    }

    return 0;
}