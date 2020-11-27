//Keep calm and carry on..
 
/*  Problem :Minimum indexes
    URL :https://www.hackerearth.com/challenges/competitive/november-circuits-20/algorithm/yassers-conditions-6cc26a09/
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
# define loop1(i,a,b)    for(ll i = a; i<b; i++)
# define loop2(i,a,b)    for(ll i = b-1; i>=a; i--)
# define all(v)         v.begin(), v.end()
# define rall(v)        v.rbegin(), v.rend()
# define mem(a, val)     memset(a, val, sizeof(a))
# pragma GCC optimize "trapv"
 
 
ll sum_of_dgts(ll n){
    ll sum = 0;
    for (sum = 0; n > 0; sum += n % 10, n /= 10); 
    return sum ;
}
 
int main() {
 
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
 
	fast;
	int n, q, qi;   cin >> n >> q;
    ll a[n];
    loop1(i,0,n)    cin >>  a[i];
    while (q--){
        cin >> qi;
        if (qi == n)    cout << -1 << endl;
        else{
            ll j = -1, sumi = sum_of_dgts(a[qi-1]);
            loop1(i,qi,n){
                if (sum_of_dgts(a[i]) < sumi && a[i] > a[qi-1]){
                    j = i + 1;  break;  }
            }
            cout << j << endl;
        }
    }
 
	return 0;
}
