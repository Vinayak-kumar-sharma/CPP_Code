#include <iostream>
#include <unordered_set>
#include <string>

using namespace std;

int main() {
    string s = "computer";
    string str = "ca";
    
    unordered_set<char> charSet(str.begin(), str.end());  

    string result;
    for (char c : s) {
        if (charSet.find(c) == charSet.end()) { 
            result.push_back(c);
        }
    }

    cout << "Resulting string: " << result << endl;
    return 0;
}
