//Keep calm and carry on..

/*  Problem :A - Plural Form 
    URL :https://atcoder.jp/contests/abc179/tasks/abc179_a

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
     fast;
     string s;  cin>>s;
     int l =s.size();
      if(s[l-1] == 's')cout<<s<<"es";
      else cout<<s<<"s";

     return 0;
}

