//Keep calm and carry on..

/*  Problem :Greatest common divisor
    URL :https://www.hackerearth.com/practice/data-structures/advanced-data-structures/segment-trees/practice-problems/algorithm/cool-gcd-789acd8e/

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

int gcd(int a, int b) 
{ 
    if (b == 0) 
        return a; 
    return gcd(b, a % b);  
      
} 

 int main(){
     fast;
     ll n,m;     cin>>n>>m;
    ll a[n],q,l,r,x;
    l = r = x = 0;
    ll sum = 0;
    loop1(i,0,n) cin>>a[i];

    while(m--){ sum = 0;
        cin>>q;
        if(q == 1){
            cin>>l>>r>>x;
            loop1(i,l-1,r){
                a[i] = x;
            }
        }
        else if (q == 2){
            cin>>l>>r>>x;
            loop1(i,l-1,r){
                a[i] = gcd(a[i],x);
            }
        }
        else if (q == 3){
            cin>>l>>r;
            cout<<*max_element(a+l-1,a+r);
        }
        else {
            cin>>l>>r;
            cout<<accumulate(a+l-1,a+r,sum);

        }
        cout<<endl;
     }

     return 0;
}

