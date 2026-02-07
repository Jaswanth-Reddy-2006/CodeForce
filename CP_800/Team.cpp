#include <bits/stdc++.h>
using namespace std;

int main(){
    int t ;
    cin >> t;
    int ans = 0;
    while(t--){
        int a , b , c;
        cin >> a >> b >> c;
        int yes = 0;
        if (a + b + c >= 2) ans++;
    }
    cout << ans << endl;
    return 0;
}