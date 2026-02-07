#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int l = s.size();
        if(l > 10){
            string ans = s[0] + to_string(l - 2) + s[l -1];
            cout << ans << endl;
        }else{
            cout << s << endl;
        }
    }
    return 0;
}