//Keep calm and carry on..

/*  Problem :Ada Matrix
    URL :https://www.codechef.com/SEPT20B/problems/ADAMAT

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

    int n;     cin>>n;
    int a[n][n],k = 0, x = 0;
    char s[n-1];
    int ans = 0;
    loop1(i,0,n) loop1(j,0,n) {
        cin>>a[i][j];
        if (i == 0 && j != 0){
            x = (i*n)+j+1;
            if (a[i][j] == x)   s[k] = '1';
            else    s[k] = '0';
            k++;
         }
     }

    loop1(i,0,k-1){
        if (max_element(s,s+k) == 0) break;
        else if (s[i] != s[i+1]){
            s[i] = s[i+1];
            ans+=1;
         }
     }

    if(s[k-1] == '0') ans+=1;
    cout<<ans;

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

