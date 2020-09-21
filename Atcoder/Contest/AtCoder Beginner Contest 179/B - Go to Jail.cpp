//Keep calm and carry on..

/*  Problem :B - Go to Jail
    URL :https://atcoder.jp/contests/abc179/tasks/abc179_b

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
     int n;     cin>>n;
     int a[n],b[n];
     int cnt = 0;

     loop1(i,0,n) {  cin>>a[i]>>b[i];

        if (a[i] == b[i]){ cnt += 1;;

            if (cnt == 3){ cout<<"Yes";
                return 0;
            }
        }
        else cnt = 0;
    }
    cout<<"No";

     return 0;
}

