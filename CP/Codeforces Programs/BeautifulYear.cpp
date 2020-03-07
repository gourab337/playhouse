#include<bits/stdc++.h>
#include<algorithm>

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

//atoi()- char array to integer typecast STL, changes original string, keep copy
//itoi() - int to char array typecast:  sprintf(str,"%d",value)
//============================================================================================================================================

int isUnique(char a[4])
{   
    int repeat; int flag=1;
    for(int i=0; a[i]!='\0' ; i++) 
        { repeat=0;
            for(int j=i+1; a[j]!='\0' ; j++)
            {   
                if(a[i]==a[j])
                  { repeat=1;
                    flag=0;
                    break;
                  }
            } 
            if(!flag)
               break;
        }

    if(repeat)
       return 0;
    else
       return 1;
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    char a[4];
    cin>>a;
    
    int x=atoi(a);
          x++;
          sprintf(a,"%d",x);

   while(!isUnique(a))
    {
      int x=atoi(a);
          x++;
          sprintf(a,"%d",x);   
    }   
    
    cout<<a; 

    return(0);  
}
