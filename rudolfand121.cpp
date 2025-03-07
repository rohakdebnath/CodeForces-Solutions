#include <bits/stdc++.h>

using namespace std;
using i64 = long long;

#define UNSYNC ios::sync_with_stdio(false); cin.tie(nullptr);
#define all(x) x.begin(), x.end()
#define rep(i, ini, x) for (int i = ini; i < x; ++i)
#define per(i, fin, x) for (int i = fin; i >= x; --i)

void solve()
{
    int N; cin >> N;
    vector<int> A (N); rep(i, 0, N) cin >> A[i];
    rep(i, 0, N - 2){
        A[i + 1] -= 2*A[i];
        A[i + 2] -= A[i];
        if (A[i + 1] < 0 or A[i + 2] < 0){
            cout << "NO\n";
            return;
        }
    }
    if (A[N - 2] != 0 or A[N - 1] != 0) cout << "NO\n";
    else cout << "YES\n";
}

int main()
{
    UNSYNC
    int T;
    cin >> T;
    while(T--) solve();
    return 0;
}
