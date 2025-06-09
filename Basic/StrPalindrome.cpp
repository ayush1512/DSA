#include <bits/stdc++.h>
using namespace std;
int main(){
 bool isPalindrome(string s) {
        string o, r;
        for (int i = 0; i < s.size(); i++) {
            if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')) {
                o.push_back(tolower(s[i]));
            } else if (s[i] <= '9' && s[i] >= '0') {
                o.push_back(tolower(s[i]));
            }
        }
        for (int i = s.size() - 1; i >= 0; --i) {
            if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')) {
                r.push_back(tolower(s[i]));
            } else if (s[i] <= '9' && s[i] >= '0') {
                r.push_back(tolower(s[i]));
            }
        }
        if (o == r) {
            return true;
        } else {
            return false;
        }
    }s
}