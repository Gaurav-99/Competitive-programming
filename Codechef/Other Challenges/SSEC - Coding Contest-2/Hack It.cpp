//Keep calm and carry on..

/*  Problem :Hack It:SSEC0005
    URL :https://www.codechef.com/SSCC2020/problems/SSEC0005

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


 void just_solved_it(){
    ll n;   cin>>n;
    
    string num = to_string(n); 
    int size = num.size(); 
    loop1(i,0,size){
        num[i] -= 2;
    }
    cout<<num;
 }


 int main(){
     fast;
     int t;     cin>>t;

     while(t--){
        just_solved_it();
        cout<<endl;
     }

     return 0;
}

