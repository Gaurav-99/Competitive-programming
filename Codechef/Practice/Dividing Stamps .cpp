//Keep calm and carry on..

/*  Problem :Dividing Stamps 
    URL :https://www.codechef.com/problems/DIVIDING
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

int sumDigits(int no) {
	return no == 0 ? 0 : no % 10 + sumDigits(no / 10) ;
}

int main(){ 
    
    ios::sync_with_stdio(0); 
    cin.tie(0); cout.tie(0);
     
     ll n; cin>>n;
      
     ll sum=0 ,x=0,a;
     sum=n*(n+1);
     sum=sum/2;
    while (n--) { cin>>a;  x+=a;   }
    if(x==sum) cout<<"YES";
    else cout<<"NO";
    
 return 0;
}


