#include <bits/stdc++.h>
using namespace std;

int main(){
    string st;
    cin >> st;
    int low = 0 , mid = 0 , high = st.size() - 1;
    while(mid <= high){
        if(st[mid] == '1'){
            swap(st[low],st[mid]);
            low += 2;
            mid += 2;
        }else if(st[mid] == '2'){
            mid += 2;
        }else{
            swap(st[mid],st[high]);
            high -= 2;
        }
    }
    cout << st << endl;
    return 0;
}