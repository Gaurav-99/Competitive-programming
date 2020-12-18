//Keep calm and carry on..

/*  Problem :Sell All the Cars
    URL :https://www.codechef.com/problems/CARSELL
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


 int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;  cin>>t;
    while(t--){
    int i=0,n;   cin>>n;
    ll p[n], sum = 0;
    loop1(i,0,n){   cin>>p[i];  }
    sort(p, p+n, greater<int>() );
    loop1(i,0,n){
        ll x = p[i] - i;
        if(x>0) sum += x ;
        }
    cout<<sum%md;
    cout<<"\n";

    }

    return 0;
 }

