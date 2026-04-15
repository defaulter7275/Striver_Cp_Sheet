#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define pb push_back
#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)(x).size())
#define endl '\n'  
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);

void solve() {
    int n;
    if (!(cin >> n)) return;

    string s;
    int x = 0;

    for (int i = 0; i < n; i++) {
        cin >> s;
        if (s[1] == '+') {
            x++;
        } else {
            x--;
        }
    }
    
    cout << x << endl;
}

int main() {
    fastio
    solve();
    return 0;
}