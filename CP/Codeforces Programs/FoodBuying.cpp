#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    int t,b,l; string s; int spend,back,remain,total;
    cin>>t;

    while(t--)
    {
        cin>>b;
        total=0;

        if(b<10)
        {total=0;}
        else
        {
            while(b>9)
            {
                spend=(b/10)*10;
                remain=b%10;
                back=b/10;
                remain=remain+back;
                b=remain;
                total+=spend;
            }
        }
        cout<<total+b<<endl;
    }



    return(0);
}
