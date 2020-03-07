#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	
	unsigned long long int n;  int k;
	cin>>n>>k;
	
	while (k--)
	 {
	     if(n%10)
	  {
	      n--;
	  }
	    else 
	    {
	        n=n/10;
	    }
	  	 }
	cout<<n;
	
	return 0;
}
