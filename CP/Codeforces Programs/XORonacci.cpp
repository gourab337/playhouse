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
	int t; unsigned long long int a,b,n; unsigned long long int f[1000000000];
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>n;
        f[0]=a;
        f[1]=b; unsigned long long int j=2;
        for (unsigned long long int i=2; i<=n; i++)
        {   
            f[j]=f[j-i+1]^f[j-i];
            if(j<n)
            { j++;}
        }
        cout<<f[n]<<endl;
    }
}
