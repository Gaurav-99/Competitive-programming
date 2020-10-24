//Keep calm and carry on..

/*  Problem :Reorder
    URL : https://codeforces.com/contest/1436/problem/A
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

int countDigit(long long n) { 
    return floor(log10(n) + 1); 
}

 void just_solved_it(){
   ll n,m;    cin >> n >> m;
   ll ans = 0, a;
   loop1(i,0,n){
       cin >> a;
       ans += a;
   }
   if ( ans == m)   cout << "YES";
   else cout << "NO";
   
    
}


 int main(){
     fast;
     ll t;     cin >> t;
     while (t--){
         just_solved_it();
         cout << endl;
         }



     return 0;
}

