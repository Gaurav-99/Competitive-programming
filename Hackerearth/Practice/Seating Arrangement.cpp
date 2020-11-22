//Keep calm and carry on..
 
/*  Problem :Seating Arrangement
    URL :https://www.hackerearth.com/practice/algorithms/dynamic-programming/introduction-to-dynamic-programming-1/practice-problems/algorithm/sumits-sub-array-and-sub-sequence/
 
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
 
 int main(){
     fast;
     int t;     cin>>t;
     int n;
 
     while(t--){
         cin>>n;
         int rem = n % 12;
         if (rem == 6)  cout<<n+1;
         else if (rem == 5) cout<<n+3;
         else if (rem == 4) cout<<n+5;
         else if (rem == 3) cout<<n+7;
         else if (rem == 2) cout<<n+9;
         else  if (rem == 1) cout<<n+11;
         else  if (rem == 7) cout<<n-1;
         else  if (rem == 8) cout<<n-3;
         else  if (rem == 9) cout<<n-5;
         else  if (rem == 10) cout<<n-7;
         else  if (rem == 11) cout<<n-9;
         else  cout<<n-11;
 
 
         cout<<" ";
 
         if (rem == 0 || rem == 1 || rem == 6 || rem == 7)
            cout<<"WS";
         else if (rem == 2 || rem == 5 || rem == 11 || rem == 8)
            cout<<"MS";
         else cout<<"AS";
 
         cout<<endl;
     }
     return 0;
}
