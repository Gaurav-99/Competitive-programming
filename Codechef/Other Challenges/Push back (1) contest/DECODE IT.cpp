//Keep calm and carry on..

/*  Problem :DECODE IT
    URL :https://www.codechef.com/PBK12020/problems/ITGUY16
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
	ll n , k;	cin >> k;
	int space = k - 1;
	loop1(i, 1, k + 1) {

		loop1(k, 0, space)
		cout << " ";
		space--;

		if (i % 2 == 0) {
			loop1(j, 1, i + 1)
			cout << j;
			if (i != k)	cout << endl;

		}
		else {
			char ch = 'A';
			loop1(j, 1, i + 1) {
				cout << ch;
				ch = char(int(ch) + 1);
			}
			if (i != k)
				cout << endl;
		}


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
