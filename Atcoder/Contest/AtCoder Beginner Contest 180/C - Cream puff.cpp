//Keep calm and carry on..

/*  Problem :C - Cream puff
    URL : https://atcoder.jp/contests/abc180/tasks/abc180_c
*/

#include<bits/stdc++.h>

using namespace std;
typedef long long int  ll ;
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
     fast;
     ll n;     cin >> n;
     set<ll> ans;

     for (ll i = 1; i*i <= n; i++){
        if (n%i == 0){
            ans.insert(i);
            ans.insert(n/i);
            }
     }
     for(auto x:ans) cout << x << endl;

     return 0;
}

