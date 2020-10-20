//Keep calm and carry on..

/*  Problem :A. Metro
    URL :https://codeforces.com/contest/1055/problem/A
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

int main(){
  fast
	int n ,s;
	cin >> n >> s;
	int a[1010],b[1010];
	for(int i=0 ; i<n;i++)
		cin >> a[i];
	for(int i=0 ; i<n;i++)
		cin >> b[i];
	if( a[0]==0||(b[s-1]==0&&a[s-1]==0))
		return cout << "NO",0;
	for(int i=s;i<n;i++)
	{
		if(a[i]==1&&b[i]==1)
			return cout << "YES",0;
	}
	if(a[s-1]==1) 
		return cout<<"YES",0;
	return cout << "NO",0 ;


return 0;
}
