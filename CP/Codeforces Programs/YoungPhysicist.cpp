#include<iostream>
#include<string.h>
using namespace std;
int main()
{ ios_base::sync_with_stdio(false);    cin.tie(NULL);  cout.tie(NULL);
    
	int n;
	int vector[100][3];
	cin>> n;
	for (int i=0; i<n; i++)
	{
		for(int j=0; j<3; j++)
		{
			cin>> vector[i][j];
		}
	}
	   int sum[3];
        
    for(int i=0; i<=3 ; i++)
	{    sum[i]=0; 
		for(int j=0; j<n ; j++)
		{
			sum[i]=sum[i]+vector[j][i];
		
		}
	}  
	 
		if(sum[0]==0 && sum[1]==0 && sum[2]==0)
		{
			cout<<"YES";
		}
		 else
		 {
			 cout<<"NO";
		 } 
		
}
		
