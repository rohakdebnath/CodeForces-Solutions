#include <bits/stdc++.h>

using namespace std;
using i64 = long long;

#define UNSYNC ios::sync_with_stdio(false); cin.tie(nullptr);
#define sci(x) static_cast<int>(x)
#define all(x) x.begin(), x.end()
#define rep(i, ini, x) for (int i = ini; i < x; ++i)
#define per(i, fin, x) for (int i = fin; i >= x; --i)
#define VI vector<i64>
#define VVI vector<vector<i64>>

int main()
{
    UNSYNC
    int n; cin >> n;
    int del = 1;
    rep(i, 0, n){
        int a; cin >> a;
        if (a % 2 == 0) cout << a/2 << ' ';
        else {
            cout << (a + del)/2 << ' ';
            del *= -1;
        }
    }
    cout << '\n';
    return 0;
}
