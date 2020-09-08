//Keep calm and carry on..
/* 
    Problem :Chef Wars - Chef and Strings
    URL : https://www.codechef.com/JULY20B/problems/CHEFSTR1
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
# define loop1(i,a,b)   for(int i = a; i<b; i++)
# define loop2(i,a,b)   for(int i = b-1; i>=a; i--)
# pragma GCC optimize "trapv"


 int main(){
    fast;
    int t;  cin>>t;
    while (t--){
        ll ans = 0;

        int n,l,i=0,x=0;      cin>>n;
        int s[n];

        loop1(i,0,n) cin>>s[i];
        loop1(i,0,n-1){
                x = s[i+1]-s[i] ;
                x = abs(x) - 1;
                ans = ans + x ;
        }

        cout<<ans<<"\n";

    }

    return 0;
 }

