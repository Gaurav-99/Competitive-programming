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
	ll n;	cin >> n;
	ll a[n], b[n];
	ll prd = 0;	
	loop1(i,0,n){
		cin >> a[i];
		//if (a[i] ==  0) ans = 1;
	}
	loop1(i,0,n){
		cin >> b[i];
		
	}

	loop1(i,0,n){
		prd += a[i]*b[i]; 
	}
	if (prd == 0)	cout << "Yes";
	else	cout << "No";


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
