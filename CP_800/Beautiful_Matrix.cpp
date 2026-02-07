#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<int>> mat(5, vector<int>(5));
    int ans = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> mat[i][j];
            if (mat[i][j] == 1)
            {
                ans += abs(2 - j );
                ans += abs(2 - i);
                cout << ans << endl;
                return 0;
            }
        }
    }
    return 0;
}