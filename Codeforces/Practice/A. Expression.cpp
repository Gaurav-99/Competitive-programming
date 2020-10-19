//Keep calm and carry on..

/*  Problem :A. Expression
    URL : https://codeforces.com/problemset/problem/479/A
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
 
   int ar[4],a,b,c;  cin>>a>>b>>c;
   ar[0]=a*b*c;   ar[1]=a*(b+c);
   ar[2]=(a+b)*c; ar[3]=a+b+c;
   sort(ar,ar+4);
   cout<<ar[3];
  return 0;
}
