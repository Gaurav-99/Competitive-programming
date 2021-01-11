
// Problem : Point Of Impact
// Contest : CodeChef - January Challenge 2021 Division 3
// URL : https://w...content-available-to-author-only...f.com/JAN21C/problems/BILLRD
// Memory Limit : 256 MB
// Time Limit : 1000 ms
// Powered by CP Editor (https://g...content-available-to-author-only...b.com/cpeditor/cpeditor)
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
typedef long double ld;
#define F first
#define S second
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define pb push_back
#define mk make_pair
#define fast                    \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);
#define rep(i, a, b) for (ll i = a; i < b; i++)
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef vector<vi> vvi;
typedef vector<vii> vvii;
#define sz(x) (int)x.size()
#define mem(a, val) memset(a, val, sizeof(a))
#define deci(x) cout << fixed << setprecision(x);
#define bitcount(x) __builtin_popcountll(x)

const int dx[8] = {-1, -1, -1, 0, 1, 1, 1, 0};
const int dy[8] = {-1, 0, 1, 1, 1, 0, -1, -1};

const long long int mod = 1e9 + 7;
const long double EPS = 1e-12;
const int N = 1e5 + 20;

void solve() {
  ll n, k, x, y;
  cin >> n >> k >> x >> y;

  if (x == y) {
    cout << n << ' ' << n;
    cout << '\n';
    return;
  }
  k %= 4;
  if (k == 0) k = 4;

  if (x > y) {
    vector<pair<ll, ll>> ans;
    ans.pb({x, y});
    ans.pb({n, n - x + y});
    ans.pb({n - x + y, n});
    ans.pb({0, x - y});
    ans.pb({x - y, 0});
    cout << ans[k].F << ' ' << ans[k].S << '\n';

  } else {
    vector<pair<ll, ll>> ans;
    ans.pb({x, y});
    ans.pb({n + x - y, n});
    ans.pb({n, n + x - y});
    ans.pb({y - x, 0});
    ans.pb({0, y - x});
    cout << ans[k].F << ' ' << ans[k].S << '\n';
  }
}
int main() {
  fast;
  ll t;
  t = 1;

  cin >> t;

  while (t--) {
    solve();
  }

  return 0;
}
