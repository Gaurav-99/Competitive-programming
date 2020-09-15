//Keep calm and carry on..

/*  Problem : REVERSE LENGTH DIVISBLE:SSEC0020
    URL :https://www.codechef.com/SSCC2020/problems/SSEC0020

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

 int digits_counts(ll n){
     
    string num = to_string(n); 
    return num.size(); 
 }
 
 int numb(ll n, int i){
     
    int first_n = (long) (n/pow(10, floor(log10(n)) - i + 1));
    
    return first_n;
 }
 
 bool divisible(ll n, ll i){
    int len = digits_counts(n) - i+1;
    int newn = numb(n,i); 
    if (newn % len != 0)     return false;
    else    return true;
 }

 int main(){
    fast;
    ll n;     cin>>n;
    ll i = 0;
    
    
    while(divisible(n,i)){
        i++;
        if ((digits_counts(n)-i) == 0 ){
            cout<<"Yes";
            return 0;
         } 
     }
     
    cout<<"No";
    return 0;
}

