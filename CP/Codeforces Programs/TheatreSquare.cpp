#include<iostream>
#include<string.h>
using namespace std;
int main()
{ ios_base::sync_with_stdio(false);    cin.tie(NULL);  cout.tie(NULL);
    unsigned long long int n,m,a,p,q;
	cin>>n>>m>>a;
   if((n%a)!=0)
   {
	   p=(n/a)+1;
   }
    else if((n%a)==0)
	{
		p=(n/a);
	}
	if((m%a)!=0)
   {
	   q=(m/a)+1;
   }
    else if((m%a)==0)
	{
		q=(m/a);
	}
    cout<<(p*q);
}
		
