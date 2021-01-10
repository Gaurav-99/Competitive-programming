//Keep calm and carry on..

/*  Problem :
    URL :
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

int countDigit(ll n) {
	return floor(log10(n) + 1);
}
int sumDigits(int no) {
	return no == 0 ? 0 : no % 10 + sumDigits(no / 10) ;
}

void just_solved_it() {
	ll n, m;	cin >> n >> m;

	ll a[n] = {0} , b[m] = {0}, i = 0, ans = 0;

	loop1(i, 0, n)	cin >> a[i];
	loop1(i, 0, m)	cin >> b[i];

	sort(a, a + n);
	sort(b, b + m, greater<ll>());
	bool cnd = false;

	ll suma = 0, sumb = 0;
	suma = accumulate(a, a + n, suma);
	sumb = accumulate(b, b + m, sumb);

	if (suma > sumb)	cout << 0;
	else {
		ll mm = min(n, m);
		while (i < mm) {
			suma = sumb = 0 ;

			swap(a[i], b[i]);
			//loop1(i, 0, n)	cout << a[i];
			//cout << "  ";
			//loop1(i, 0, m)	cout << b[i];
			//cout << endl;
			suma = accumulate(a, a + n, suma);
			sumb = accumulate(b, b + m, sumb);
			if (suma > sumb) {
				cout << i + 1;
				cnd = true;
				break;
			}
			i++;
		}
		if (cnd == false)	cout << -1;
	}
}


int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	fast;
	ll t = 1;	cin >> t;

	while (t--) {

		just_solved_it();
		cout << endl;
	}

	return 0;
}
