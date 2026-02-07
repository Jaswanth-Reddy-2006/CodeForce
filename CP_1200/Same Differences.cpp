#include <bits/stdc++.h>
using namespace std;

int main(){
    int t ;
    cin >> t;
    while(t--){
        int n ;
        cin >> n;
        vector<int>diff(n);
        for(int i = 0 ; i < n ;i++){
            cin >> diff[i];
        }
        int ans = 0;
        for(int i = 0 ; i < n ; i++){
            for(int j = i + 1 ; j < n ; j++){
                if((diff[j] - diff[i]) == j - i)ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}