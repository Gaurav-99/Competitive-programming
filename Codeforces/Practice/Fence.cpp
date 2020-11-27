//Keep calm and carry on..

/*  Problem :A. Fence
    URL :https://codeforces.com/contest/1422/problem/A

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

 void solve(){
    ll a,b,c;
     cin>>a>>b>>c;
    ll x = c + a + b - 2;
    cout<<x;

}
 int main(){
     fast;
     ll t;      cin>>t;
      while(t--){
        solve();
        cout<<endl;

      }

     return 0;
}

