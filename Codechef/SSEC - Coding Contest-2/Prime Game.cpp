//Keep calm and carry on..

/*  Problem : Prime Game:SSEC0006
    URL : https://www.codechef.com/SSCC2020/problems/SSEC0006

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


int primeInRange(int L, int R,int prime[]) { 
    int i, j, flag,k = 0; 
    
    for (i = L; i <= R; i++) { 
  
        if (i == 1 || i == 0) 
            continue; 
  
        flag = 1; 
  
        
        for (j = 2; j <= i / 2; ++j) { 
            if (i % j == 0) { 
                flag = 0; 
                break; 
            } 
        } 
  
        if (flag == 1) {
            prime[k] = i; 
            k++;
        }
    } 

  return k;
    
} 


 int main(){
     fast;
     ll a,b;    cin>>a>>b;
     int prime[b-a] = { 0 };
     int rup, rlw;
     rup = a*b;
     rlw = rup/4;
     
     int len = primeInRange(a,b,prime);
     
     loop1(i,0,len-1){
         loop1(j,i+1,len){
             int x = prime[i]*prime[j];
             
             if( (x <= rup) && (x >= rlw))
                cout<<prime[i]<<","<<prime[j]<<endl;
             else if (x > rup) break;
         }
         
     }
     

     return 0;
}

