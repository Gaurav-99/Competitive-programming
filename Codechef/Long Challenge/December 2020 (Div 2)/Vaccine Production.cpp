//Keep calm and carry on..

/*  Problem :Vaccine Production
    URL :https://www.codechef.com/DEC20B/problems/VACCINE1
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
	int v1, v2, d1, d2, p;
	cin >> d1 >> v1 >> d2 >> v2 >> p;
	int vac = 0, de = 0;
	while (vac < p) {
		de++;
		if (de >= d1)	vac += v1;
		if (de >= d2)	vac += v2;
	}

	cout << de;
}

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	fast;
	ll t;	//cin >> t;
	t = 1;

	while (t--) {

		just_solved_it();
		cout << endl;
	}

	return 0;
}
