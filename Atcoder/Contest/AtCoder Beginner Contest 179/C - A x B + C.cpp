//Keep calm and carry on..

/*  Problem :C - A x B + C
    URL :https://atcoder.jp/contests/abc179/tasks/abc179_c

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


void SieveOfEratosthenes(int n, bool prime[],
                         bool primesquare[], int a[])
{


    for (int i = 2; i <= n; i++)
        prime[i] = true;


    for (int i = 0; i <= (n * n + 1); i++)
        primesquare[i] = false;


    prime[1] = false;

    for (int p = 2; p * p <= n; p++) {


        if (prime[p] == true) {

            for (int i = p * 2; i <= n; i += p)
                prime[i] = false;
        }
    }

    int j = 0;
    for (int p = 2; p <= n; p++) {
        if (prime[p]) {

            a[j] = p;


            primesquare[p * p] = true;
            j++;
        }
    }
}

int countDivisors(int n)
{

    if (n == 1)
        return 1;

    bool prime[n + 1], primesquare[n * n + 1];

    int a[n];

    SieveOfEratosthenes(n, prime, primesquare, a);


    int ans = 1;


    for (int i = 0;; i++) {

        if (a[i] * a[i] * a[i] > n)
            break;


        int cnt = 1;
        while (n % a[i] == 0)
        {
            n = n / a[i];
            cnt = cnt + 1;
        }


        ans = ans * cnt;
    }


    if (prime[n])
        ans = ans * 2;


    else if (primesquare[n])
        ans = ans * 3;


    else if (n != 1)
        ans = ans * 4;

    return ans;
}

ll np2(int x){

    return (x*(x-1)) ;

}

 int main(){
     fast;
     int n;      cin>>n;
     ll ans = 0;
     if (n == 2){
        cout<<1;
        return 0;
    }
     while(n--){
        if (n > 0){
         int  x = countDivisors(n);
         ans += x;
        }
     }
     cout<<ans;



     return 0;
}

