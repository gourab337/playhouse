#include<iostream>
#include<string.h>
#include<stdio.h>
#include<algorithm>
#include <bits/stdc++.h>

using namespace std;

#define mp make_pair
#define pb push_back
#define ff first
#define ss second

const double pi=3.1415926535897932384626433832;
const long long mod=1e9+7;
//long long primeset[5000000]={};
typedef complex<double> cd;
typedef long long ll;
typedef double ld;
//#define For(i,0,n) for(long long i = 0 ; i<n ;i++)
//#define uppertolower if(isupper(a[i]))  {a[i] = a[i] + 32;}

/*void removeCharsFromString( string &str, char* charsToRemove ) {
   for ( unsigned int i = 0; i < strlen(charsToRemove); ++i ) {
      str.erase( remove(str.begin(), str.end(), charsToRemove[i]), str.end() ); }}*/

//============================================================================================================================================
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int t,b,p,f,h,c;	int profit=0;
	cin>>t;
	while(t--)
	{ profit=0;
		cin>>b>>p>>f;
		cin>>h>>c;
	if(h>c)
	{
		if(2*(p+f)<b)
		{
			profit=p*h+f*c;
		}
		else
		{
			for(int i=0; i<=p; i++)
			{   for(int j=0; j<=f; j++)
				{if(((2*(i+j))<=b)&&((i*h+j*c)>profit))
				{profit=i*h+j*c;}}
			}
		}
		
	}
	else if (c>=h)
	{
		if(2*(p+f)<b)
		{
			profit=p*h+f*c;
		}
		else
		{  for(int i=0; i<=p; i++)
			{
				for(int j=0; j<=f; j++)
				{
					if(((2*(i+j))<=b)&&((i*h+j*c)>profit))
						{profit=i*h+j*c;}
			}
			}
		}
	}
   cout<<profit<<endl;
	}
return(0);

}
