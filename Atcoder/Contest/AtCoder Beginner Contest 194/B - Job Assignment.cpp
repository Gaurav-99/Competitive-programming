//Keep calm and carry on..

/*  Problem : B - Job Assignment
    URL : https://atcoder.jp/contests/abc194/tasks/abc194_b
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

void soln() {
	ll n;   cin >> n;
	vii a(n);
	ll ans = 0, x = 0, y = 0, b[n];
	y  = 1e11;
	loop1(i, 0, n) {
		cin >> a[i].F >> a[i].S;
		b[i] = a[i].F + a[i].S;
		y = min(b[i], y);
	}
	ans = 1e6;
	loop1(i, 0, n)
	loop2(j, 0, n) {
		if (i == j)x = a[i].F + a[j].S;
		else x = max(a[i].F, a[j].S);
		x = min(x, y);
		ans = min(x, ans);
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
