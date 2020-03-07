#include <bits/stdc++.h>
 
using namespace std;
 

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    int t;
    cin>>t;
    while(t--)
    {
        int n; int even=0; int odd=0;
        cin>>n;
        int a[2000];
        for(int i=0; i<n; i++)
           { cin>>a[i];
             if(a[i]%2==0)
                  even++;
             else
                odd++;
           }
 
        if(odd%2)
            cout<<"YES";
        else if(odd && odd%2==0 && even)
            cout<<"YES";         
        else
            cout<<"NO";
        cout<<endl;
    }
 
 
 
    return(0);
}