#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using si = set<int>;
using vll = vector<ll>;
using pii = pair<int, int>;

#define pb push_back
#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)(x).size())
#define F first
#define S second
#define endl '\n'  
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);

const int MOD = 1e9 + 7;
const ll INF = 1e18;

void solve() {
    string s;
    cin >> s;

    for (int i = 0; i < s.length(); i++) {
        int digit = s[i] - '0';
        int inverted = 9 - digit;

        if (i == 0 && inverted == 0) {
            continue; 
        }

        if (inverted < digit) {
            s[i] = inverted + '0';
        }
    }

    cout << s << endl;
}

int main() {
    fastio

    solve();
    return 0;
}