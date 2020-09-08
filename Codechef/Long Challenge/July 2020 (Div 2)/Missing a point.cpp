//Keep calm and carry on..
/* 
    Problem :Chef Wars - Missing a point
    URL : https:https://www.codechef.com/JULY20B/problems/PTMSSNG
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


int main() {
   fast;
   int t;
	 long long n,x=1LL,y=1LL;
	 cin>>t;
	 while(t--){
       cin>>n;
       ll nm = 4*n-1;
	     x=0LL,y=0LL;
	     loop1(i,0,nm) {
	        long long x1,y1;
	        cin>>x1>>y1;
	        x^=x1;
	        y^=y1;
	    }
	    cout<<x<<" "<<y<<endl;
	}
	return 0;
}
