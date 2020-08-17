//Keep calm and carry on..

#include<bits/stdc++.h>

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


using namespace std;

typedef long long ll;
typedef double db;


 int main(){
     fast;
     int t;     cin>>t;
     while(t--){
        int h,p;    cin>>h>>p;
        int ans = 0;
        int sp = 0;
        while(p > 0){
            
            sp += p;
            p = p/2;
        }
       
        if(sp >= h) ans = 1;
        cout<<ans<<endl;
 }
 return 0;
}
