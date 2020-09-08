
//Keep calm and carry on..

//Keep calm and carry on..

/*  Problem : CRDGAME3:Another Card Game Problem
    URL : https://www.codechef.com/AUG20B/problems/CRDGAME3

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

 int main(){
     fast;
     int t;     cin>>t;

     while(t--){
        int pc, pr;
        int ans = 1, dg = 1;
        cin>>pc>>pr;

        if (pc < 10 && pr > 10) ans = 0;
        else if (pc > 10 && pr > 10){
            if (pr < pc){ if(pr%9 == 0) dg = pr/9;
                          else dg = pr/9 +1;  }
            else { ans = 0; 
                    if(pc%9 == 0) dg = pc/9;
                    else dg = pc/9 +1; }
        }
        cout<<ans<<" "<<dg<<endl;
     }

  return 0;
}
