//Keep calm and carry on..

// Problem: C - Kaprekar Number
// Contest: AtCoder - AtCoder Beginner Contest 192
// URL: https://atcoder.jp/contests/abc192/tasks/abc192_c
// Memory Limit: 1024 MB
// Time Limit: 2000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)
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

string f(string s) {
  string a = s, b = s;
  sort(rall(a));
  sort(all(b));
  string ans = to_string(stoi(a) - stoi(b));
  return ans;
}

void solve() {
  ll n, k;
  cin >> n >> k;
  string cur = to_string(n);
  while (k--) {
    cur = f(cur);
  }
  cout << cur << '\n';
}
int main() {
  fast;
  ll t;
  t = 1;

  // cin>>t;

  while (t--) {
    solve();
  }

  return 0;
}
