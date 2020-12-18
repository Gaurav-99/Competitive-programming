//Keep calm and carry on..

/*  Problem :Chef and The Right Triangles 
    URL :https://www.codechef.com/problems/RIGHTRI/
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

int sumDigits(int no) {
	return no == 0 ? 0 : no % 10 + sumDigits(no / 10) ;
}

float distance(int x1, int y1, int x2, int y2) 
{ 
    return pow(x2 - x1, 2) +  pow(y2 - y1, 2) * 1.0; 
} 
bool checkcnd(float a, float b, float c)
{
  
  if(a+b==c) return true;
  else if(c+b==a) return true;
  else if(a+c==b) return true ;
  else return false ;
 }

int main(){ 
    
    ios::sync_with_stdio(0); 
    cin.tie(0); cout.tie(0);
    
    unsigned int n; cin>>n;
    int x1,x2,x3,y1,y2,y3,i=0;
    float a=0,b=0,c=0;
    bool x;

    while(n--){ 
      cin>>x1>>y1>>x2>>y2>>x3>>y3;
      a=distance(x1,y1,x2,y2);
      b=distance(x2,y2,x3,y3);
      c=distance(x1,y1,x3,y3);
      x=checkcnd(a,b,c);
      if(x==true) ++i;
    }
    cout<<i;
 return 0;
}


