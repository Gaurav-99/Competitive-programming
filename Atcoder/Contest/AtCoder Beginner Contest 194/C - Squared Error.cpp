//Keep calm and carry on..

/*  Problem : C - Squared Error
    URL : https://atcoder.jp/contests/abc194/tasks/abc194_c
    Memory Limit: 1024 MB
	Time Limit: 2000 ms
	Powered by CP Editor (https://github.com/cpeditor/cpeditor)
*/

#include<bits/stdc++.h>
//#include <boost/math/common_factor.hpp>

using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
typedef long double ld;

# define fast           ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
# define pi             3.1415926535897932384626
# define mod            1000000007
# define pb             push_back
# define all(v)			v.begin(), v.end()
# define rall(v)		v.rbegin(), v.rend()
# define F              first
# define S              second
# define mk             make_pair
# define loop1(i,a,b)   for(ll i = a; i<b; i++)
# define loop2(i,a,b)   for(ll i = b-1; i>=a; i--)
# define endl          '\n'
# define DEBUG          false
# define sz(x) 			(int)x.size()
# define mem(a, val) 	memset(a, val, sizeof(a))
# define deci(x) 		cout << fixed << setprecision(x);
# define bitcount(x) 	__builtin_popcountll(x)
# pragma GCC optimize "trapv"

typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef vector<vi> vvi;
typedef vector<vii> vvii;

const int dx[8] = { -1, -1, -1, 0, 1, 1, 1, 0};
const int dy[8] = { -1, 0, 1, 1, 1, 0, -1, -1};


const long double EPS = 1e-12;
const int N = 1e5 + 20;


int countDigit(ll n) {
	return floor(log10(n) + 1);
}
int sumDigits(int no) {
	return no == 0 ? 0 : no % 10 + sumDigits(no / 10) ;
}
ll sumsqPairs(ll arr[], ll n)
{

	ll sum = 0, x = 0;
	for (ll i = n - 1; i >= 0; i--) {
		x = i * arr[i] - (n - 1 - i) * arr[i];
		sum += x * x;
	}
	return sum;
}
void soln() {
	ll n, temp;
	cin >> n;
	ll ans = 0;
	ll mp[450] = {0};
	ll LIM = 210;
	for (int i = 0; i < n; i++) {
		cin >> temp;
		mp[temp + LIM] += 1;
	}
	for (ll i = 0; i < 430; i++) {
		for (ll j = i + 1; j < 430; j++) {
			ll x = mp[i], y = mp[j];
			ans += ((x * y) * (i - j) * (i - j));
		}
	}
	cout << ans;

}
int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	fast;
	ll t = 1;	//cin >> t;

	while (t--) {

		soln();
		cout << endl;
	}

	return 0;
}
