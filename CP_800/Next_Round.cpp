#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> score(n);
    for (int i = 0; i < n; i++) {
        cin >> score[i];
    }

    int cutoff = score[m - 1];
    int ans = 0;

    for (int i = 0; i < n; i++) {
        if (score[i] > 0 && score[i] >= cutoff) {
            ans++;
        }
    }

    cout << ans << '\n';
    return 0;
}
