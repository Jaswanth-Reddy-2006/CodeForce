#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, a, b;
    cin >> n >> m >> a >> b;
    if(float(b)/float(m) > a){
        cout << a * n << endl;
        return 0;
    }
    int cost = (n / m) * b;
    int rem = n % m;

    cost += min(rem * a, b);

    cout << cost << '\n';
    return 0;
}
