//Keep calm and carry on..

/*  Problem :C - Unlucky 7
    URL :https://atcoder.jp/contests/abc186/tasks/abc186_c
*/

#include<bits/stdc++.h>

using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
typedef long double ld;


# define fast           ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
# define pb             push_back
# define pi             3.1415926535897932384626
# define mod            1000000007
# define endl          '\n'
# define DEBUG          false
# define F              first
# define S              second
# define lop1(i,a,b)   for(ll i = a; i<b; i++)
# define lop2(i,a,b)   for(ll i = b-1; i>=a; i--)
# pragma GCC optimize "trapv"

int countDigit(ll n) {
	return floor(log10(n) + 1);
}

int sumDigits(int no) {
	return no == 0 ? 0 : no % 10 + sumDigits(no / 10) ;
}
bool seven(ll x , ll base) {

	while (x > 0) {
		if (x % base == 7)
			return true;
		x /= base;
	}
	return false;
}

void just_solved_it() {
	ll n;	cin >> n;
	int ans = 0;
	lop1(i, 1, n + 1) {
		if (seven(i, 10) || seven(i, 8)) continue;
		ans++;
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

		just_solved_it();
		cout << endl;
	}

	return 0;
}
