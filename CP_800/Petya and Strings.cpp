#include <bits/stdc++.h>
using namespace std;

int main(){
    string a , b;
    cin >> a;
    cin >> b;
    for(int i = 0; i < a.size();i++){
        char x = toupper(a[i]);
        char y = toupper(b[i]);
        if((x - 'A') > (y - 'A')){
            cout << 1 << endl;
            return 0;
        }else if((x - 'A') < (y - 'A')){
            cout << -1 << endl;
            return 0;
        }
    }
    cout << 0 << endl;
    return 0;
}
