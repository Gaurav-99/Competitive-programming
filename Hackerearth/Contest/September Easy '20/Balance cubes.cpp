//Keep calm and carry on..

/*  Problem :Balance cubes
    URL :https://www.hackerearth.com/problem/algorithm/balance-it-2-08745bd7/

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

 void just_solve_it(){
    ll n;
 }

 int main(){
     fast;
     int n;     cin>>n;
     int i = 0;

     while(n > 1){
        if (n == 1) break;
        else {
            n = n/2;
            i++;
        }
     }
     cout<<i;

     return 0;
}

