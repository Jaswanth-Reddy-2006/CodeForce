#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    
    while(t--){
        int l , a , b;
        cin >> l >> a >> b;
        int ans = a;
        int i = 0 , x = a;
        while(i < l){
            x = (x + b) % l;
            ans = max(ans,x);
            i++;
        }
        cout << ans << endl;
    }
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;

//     while (t--) {
//         int l, a, b;
//         cin >> l >> a >> b;

//         int g = gcd(l, b);
//         int ans = l - g + (a % g);

//         cout << ans << '\n';
//     }

//     return 0;
// }
