//Keep calm and carry on..

/*  Problem :Lagest sum consecutive increasing digits in a No:SSEC0015
    URL : https://www.codechef.com/SSCC2020/problems/SSEC0015

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

 int digits_count(ll n){
     
    string num = to_string(n); 
    return num.size(); 
 }

 int main(){
     fast;
     int n;     cin>>n;
     
     if (n < 10){
         cout<<n<<":1-1";
         return 0;
     }
     
     string num = to_string(n);
     int len = num.size();
     
     int arr[len];
     char ch;
     int n2 = n;
     loop2(i,0,len){
         arr[i] = n2%10;
         n2 /= 10;
     }
     
     if (n < 100){
         if (arr[1] > arr[0]){
             cout<<arr[0]+arr[1]<<":1-2";
             return 0;
         }
         else{
             cout<<arr[0]<<":1-1";
             return 0;
         }
     }
     
     int nd = 0;
     int sum[len] = { 0 };
     
     loop1(i,0,len){
         
        int st_n = arr[i];
        sum[i] = arr[i];  
        loop1(j,i,len){
            if (arr[j] > st_n){
                sum[i] += arr[j];
                nd = j;
                st_n = arr[j];
            }
            
        }
     }
     cout<<(*max_element(sum,sum+len))<<":";
     int dis = distance(sum, max_element(sum, sum + len))+1;
     cout<<dis<<"-"<<nd+1;

     return 0;
}

