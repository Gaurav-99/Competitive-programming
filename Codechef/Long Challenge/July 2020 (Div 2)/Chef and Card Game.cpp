//Keep calm and carry on..
/* 
    Problem :Chef Wars - Chef and Card Game
    URL : https://www.codechef.com/JULY20B/problems/CRDGAME
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
# define loop1(i,a,b)   for(int i = a; i<b; i++)
# define loop2(i,a,b)   for(int i = b-1; i>=a; i--)
# pragma GCC optimize "trapv"


int sumofdigits(ll num){
    int x=0,sum=0;
    while(num>0){
        x = num%10;
        sum = sum + x;
        num = num/10;
    }
    return sum;

 }

 int main(){
    fast;
    int t;  cin>>t;
    while (t--){
        int n,i,sa=0,sb=0,pa=0,pb=0;   cin>>n;
        ll a[n],b[n];

        loop1(i,0,n){ cin>>a[i]; cin>>b[i]; }

        loop1(i,0,n){
                sa = sumofdigits(a[i]);
                sb = sumofdigits(b[i]);
                if(sb > sa) pb++;
                else if(sb == sa){ pa++; pb++; }
                else pa++;
        }

        if(pa == pb){ cout<<2<<" "<<pa; }
        else if(pa > pb){ cout<<0<<" "<<pa; }
        else { cout<<1<<" "<<pb; }

        cout<<"\n";
    }

    return 0;
 }
