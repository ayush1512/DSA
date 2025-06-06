#include <bits/stdc++.h>
using namespace std;
int main(){
    string s = "TCSNinja";
    vector <char> r;
    cout << s << endl;
    // reverse(s.begin(),s.end());
    for(int i=s.size()-1;i>=0;i--){
        r.push_back(s[i]);
    }
    for(auto it : r){
        cout << it;
    }


}