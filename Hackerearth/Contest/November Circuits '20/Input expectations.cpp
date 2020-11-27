//Keep calm and carry on..
 
/*  Problem :Input expectations
    URL :https://www.hackerearth.com/challenges/competitive/november-circuits-20/algorithm/input-expectation-cf078d0e/
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
# define loop1(i,a,b)   for(ll i = a; i<b; i++)
# define loop2(i,a,b)   for(ll i = b-1; i>=a; i--)
# pragma GCC optimize "trapv"
 
int sumDigits(int no) {
	return no == 0 ? 0 : no % 10 + sumDigits(no / 10) ;
}
 
void just_solved_it() {
 
	ll n;	cin >> n;
	ll a[n];
	loop1(i, 0, n)	cin >> a[i];
 
	int j = 0, t = n, xn = n, N = 0;
	ll ans = 0;
	while (j != n) {
		N = a[j];
		xn  -= 1;
		j += 1;
 
		if (N <= xn){
		    j += N;
		    xn -= N;
		}	
		else {
			ans += N - xn;
			j = n;
		}
		t--;
	}
	ans +=  t;
	cout << ans;
 
}
 
int main() {
 
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
 
	fast;
	ll t = 1;	
    //cin >> t;
	
 
	while (t--) {
 
		just_solved_it();
		cout << endl;
	}
 
	return 0;
}
