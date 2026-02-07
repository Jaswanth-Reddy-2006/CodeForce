#include <bits/stdc++.h>
using namespace std;

int main(){
    int M , N ;
    cin >> M >> N;
    if(M == 0 && N == 0){
        cout << 0 <<endl;
        return 0;
    }
    int ans = (M * N)  / 2;
    cout << ans << endl;
    return 0;
}