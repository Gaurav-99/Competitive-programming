/Keep calm and carry on..

/*  Problem : Sumit's sub-array and sub-sequence
    URL :https://www.hackerearth.com/practice/algorithms/dynamic-programming/introduction-to-dynamic-programming-1/practice-problems/algorithm/sumits-sub-array-and-sub-sequence/
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
# define loop1(i,a,b)    for(ll i = a; i<b; i++)
# define loop2(i,a,b)    for(ll i = b-1; i>=a; i--)
# define all(v)         v.begin(), v.end()
# define rall(v)        v.rbegin(), v.rend()
# define mem(a, val)     memset(a, val, sizeof(a))
# pragma GCC optimize "trapv"

int maxSubArraySum(int a[], int size) 
{ 
    int max_so_far = INT_MIN, max_ending_here = 0; 
  
    for (int i = 0; i < size; i++) 
    { 
        max_ending_here = max_ending_here + a[i]; 
        if (max_so_far < max_ending_here) 
            max_so_far = max_ending_here; 
  
        if (max_ending_here < 0) 
            max_ending_here = 0; 
    } 
    
    return max_so_far; 
} 

int maxarraysumm(int a[],int n)
{
  int sum=0,temp=0;
  sort(a,a+n);
  
  if(a[n-1]<0) return a[n-1];
  for(int i=0;i<n;i++){
    if(a[i]>0)sum+=a[i];
    if(a[i]<0 && a[i+1]>=0) temp=a[i];
  }
    
    if(sum==0)sum=temp;
    
 
  return sum;
 
}
int main(){ 
    
    fast;
    unsigned int t; cin>>t;
    int n,sum1=0,sum2=0;
 
    while(t--){ cin>>n;
      int a[n];
      for(int i=0;i<n;i++)cin>>a[i];
        sum1=maxSubArraySum(a,n);
      sum2=maxarraysumm(a,n);
      cout<<sum1<<" "<<sum2<<"\n";
    }
        
 return 0;
}
