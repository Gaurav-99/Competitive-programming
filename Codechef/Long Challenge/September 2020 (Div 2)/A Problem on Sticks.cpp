//Keep calm and carry on..

/*  Problem :A Problem on Sticks
    URL : https://www.codechef.com/SEPT20B/problems/TREE2

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


  int count_distinct_elements(int a[], int n){

    unordered_set<int> s;
    int ans = 0;
    for (int i = 0; i < n; i++) {
        if(a[i] == 0);
        else{
            if (s.find(a[i]) == s.end()) {
                s.insert(a[i]);
                ans++;
            }
        }
    }

    return ans;
  }

  void just_solve_it(){

    int n;     cin>>n;
    int a[n];
    loop1(i,0,n) cin>>a[i];

    int ans = count_distinct_elements(a,n);
    cout<<ans;

 }

 int main(){
     fast;
     int t;     cin>>t;

     while(t--){

        just_solve_it();
        cout<<endl;
     }

     return 0;
}

