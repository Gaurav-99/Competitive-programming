//Keep calm and carry on..

/*  Problem :Covid Run
    URL :https://www.codechef.com/OCT20B/problems/CVDRUN

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
     int n,k,x,y;   
     cin >>n >>k >>x >>y;
     int flg = 0;
    
     if (k == 0){
         if (x == y)    cout<<"YES";
         else   cout<<"NO";
     }
     else if (k == 1)   cout<<"YES";
     else { k = k % n;
            loop1(i,1,n+1){
                if ((x+k*i)%n == y){
                    cout<<"YES";
                    flg = 1;
                    break;
                }
            }
        if (flg == 0)   cout<<"NO";
     }
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

