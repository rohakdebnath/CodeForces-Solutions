#include <bits/stdc++.h>

using namespace std;
using i64 = long long;

#define UNSYNC ios::sync_with_stdio(false); cin.tie(nullptr);
#define all(x) x.begin(), x.end()
#define rep(i, ini, x) for (int i = ini; i < x; ++i)
#define per(i, fin, x) for (int i = fin; i >= x; --i)

void solve()
{
    string s, p; cin >> s >> p;
    char t = s[0];
    s[0] = p[0]; p[0] = t;
    cout << s << ' ' << p << '\n';
}

int main()
{
    UNSYNC
    int T;
    cin >> T;
    while(T--) solve();
    return 0;
}
