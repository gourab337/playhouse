#include<iostream>
#include<string.h>
#include<stdio.h>
#include<algorithm>
#include <algorithm>
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


//============================================================================================================================================

int main()
{
 ios_base::sync_with_stdio(false);  cin.tie(NULL); cout.tie(NULL);

unsigned long long int q;  unsigned long long int a[100000];
    cin>>q;
while(q--)
{ unsigned long long int s=0;
    for(unsigned long long int i=0; i<3; i++)
    {cin>>a[i];
    s=s+a[i];}
    s=s/2;
    cout<<s<<endl;
      }
    

    return 0; 
} 

