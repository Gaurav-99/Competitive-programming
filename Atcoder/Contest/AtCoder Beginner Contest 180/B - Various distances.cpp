//Keep calm and carry on..

/*  Problem :B - Various distances
    URL : https://atcoder.jp/contests/abc180/tasks/abc180_b
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


 /*void just_solved_it(){
    int n;  cin >> n;
    string s;   cin >> s;
    int a = 0, b = 0;
    int flag = 0;
    int remgol = 0;
    loop1(i,0,2*n){
        if (i%2 == 0 && s[i] == '1')    a++;
        else if (i%2 != 0 && s[i] =='1')    b++;

        if (i%2 != 0)   remgol = n - (i+1)/2 ;
        else    remgol = n - i/2 ;

        if (abs(a-b) > remgol){
             cout << (i+1);
             flag = 1;
             break;
            }
        }
    if (flag == 0)  cout << 2*n;
}
*/

 int main(){
     fast;

     cout << fixed << setprecision(15);

     int n;     cin >> n;
     int x, chd = 0;
     ull mad = 0, ecdp = 0 ;

     loop1(i,0,n){
        cin >> x;
        x = llabs(x);
        mad += x;
        chd = max(chd,x);
        ecdp += (long)x*x;
        }
    cout << mad << "\n" ;
    cout << sqrtl(ecdp) << "\n" ;
    cout << chd ;



     return 0;
}

