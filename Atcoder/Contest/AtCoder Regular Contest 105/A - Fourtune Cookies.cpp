//Keep calm and carry on..

/*  Problem :A - Fourtune Cookies
    URL :https://atcoder.jp/contests/arc105/tasks/arc105_a

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
    int a,b,c,d;
    cin>>a>>b>>c>>d;

    if (a == b+c+d)      cout << "Yes";
    else if (b == a+c+d)      cout << "Yes";
    else if (c == a+b+d)      cout << "Yes";
    else if (d == a+b+c)     cout << "Yes";
    else if (a+b == c+d)     cout << "Yes";
    else if (a+c == b+d)     cout << "Yes";
    else if (a+d == c+b)     cout << "Yes";
    else    cout << "No";

}
 int main(){
     fast;
     solve();


     return 0;
}

