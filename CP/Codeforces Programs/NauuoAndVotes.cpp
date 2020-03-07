#include <bits/stdc++.h>
 using namespace  std;
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
cd fast_exp(cd a, long long b)
{
	if (b == 0)
		return 1;
	
	cd res = fast_exp(a, b / 2);
		
	res = res * res;
	
	if (b % 2 == 1)
		res = res * a;
	
	return res;
}

long long fastexpon(long long a,long long b,long long mod)
{
	if(b==0)
		return 1;
	
	long long res=fastexpon(a,b/2,mod);
	
	res=(res*res)%mod;
	if(b%2==1)
		res= (res * a)%mod;

	return res;
}


//TEMPLATE ENDS HERE!!!! ------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------------------------------















struct custom
{
	bool operator()(ll a, ll b)
	{
		return a > b;
	}
};

int  main()
 {
		
		// ios_base::sync_with_stdio(false);
		// cin.tie(NULL);
		// cout.tie(NULL);
		ll x,y,z;
		cin>>x>>y>>z;
		ll ca1 , ca2;
		ca1= x-y+z;
		ca2= x-y-z;

		int a1,a2;
		if(ca1>0)
		a1=3;
		else if(ca1==0)
		a1=2;
		else 
		a1=1;

		if(ca2>0)
		a2=3;
		else if(ca2==0)
		a2=2;
		else 
		a2=1;
	// cout<<"a1 = "<<a1<<"  a2 = "<<a2<<endl;
	// cout<<"ca1 ="<<ca1<<"ca2 = "<<ca2<<endl;
		if(a1!=a2)
		{
			cout<<'?'<<endl;
		}
		else
		{
			if(a1 ==3)
				cout<<'+'<<endl;
			else if(a1==2)
				cout<<0<<endl;
			else
				cout<<'-'<<endl;
		}


	//cout<<'\n'<<"time elapsed: "<<clock()*1000.0 / CLOCKS_PER_SEC<<" ms"<<'\n';
	return 0;
}