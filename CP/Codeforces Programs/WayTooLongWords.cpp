#include<stdio.h>
#include<string.h>

int main()
{
    int n,ll;
    char s[100];
    scanf("%d",&n);
    while(n--){
     scanf("%s",&s);
     ll=strlen(s);
     if(ll<=10)
     printf("%s\n",s);
     else
     printf("%c%d%c\n",s[0],ll-2,s[ll-1]);
    }
    return 0;
    }