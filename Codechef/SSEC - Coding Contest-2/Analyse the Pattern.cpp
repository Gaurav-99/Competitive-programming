//Keep calm and carry on..

/*  Problem :Analyse the Pattern:SSEC0010
    URL :https://www.codechef.com/SSCC2020/problems/SSEC0010

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
     int t;     cin>>t;
     string ptrn[7] = {"83","83 83","83 83 69","83 83 69 67"};
     while(t--){
         int n;     cin>>n;
         int x = n%7;
         if (x == 1 || x == 0) cout<<ptrn[0];
         else if (x == 2 || x == 6) cout<<ptrn[1];
         else if (x == 3 || x == 5) cout<<ptrn[2];
         else cout<<ptrn[3];
         cout<<endl;
     }
     
}

