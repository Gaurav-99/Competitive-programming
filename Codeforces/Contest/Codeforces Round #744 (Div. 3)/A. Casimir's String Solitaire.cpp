// Problem: A. Casimir's String Solitaire
// Contest: Codeforces - Codeforces Round #744 (Div. 3)
// URL: https://codeforces.com/contest/1579/problem/0
// Memory Limit: 256 MB
// Time Limit: 2000 ms

//Keep calm and carry on..

#include<bits/stdc++.h>

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
# define sz(x) 			(int)x.size()
# define mem(a, val) 	memset(a, val, sizeof(a))
# define deci(x) 		cout << fixed << setprecision(x);
# define bitcount(x) 	__builtin_popcountll(x)

typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef vector<vi> vvi;
typedef vector<vii> vvii;


void soln()
{
	string s;
	cin >> s;
	
	int a = count(s.begin(), s.end(), 'A');
	int b = count(s.begin(), s.end(), 'B');
	int c = count(s.begin(), s.end(), 'C');
	
	if (a+c == b) cout << "yes";
	else cout << "no";

}

int main()
{

	fast;
	ll t = 1;	cin >> t;
	while (t--) {
		soln();
		cout << endl;
	}
	return 0;
}
// Author: Gaurav Joshi