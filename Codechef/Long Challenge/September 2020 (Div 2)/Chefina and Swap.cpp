//Keep calm and carry on..

/*  Problem :Chefina and Swap:CHFNSWAP
    URL :https://www.codechef.com/SEPT20B/problems/CHFNSWAP

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

 ll nc2(ll n){
     
     return (n*(n-1))/2 ;
 }

 ll find_k(ll nm){
     
     ld n = nm;
     
    return (ll)(((-1.0) + sqrt(1.0 +2.0*(n*n + n)))/2.0);
 }
 int main(){
     fast;
     int t;     cin>>t;
     ll n;
     while(t--){
        cin>>n;
        if ( ((n*(n+1))/2) &1 ) cout<<0;
        else {
            int k; ll ans = 0;
            k = find_k(n);
            ans += n-k;
            if ( (2*(k*k+k)) == (n*n+n) )   ans += nc2(k) + nc2(n-k);
            cout<<ans;
        }
        cout<<endl;
     }

     return 0;
}

