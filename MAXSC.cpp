#include<bits/stdc++.h>
#define pf printf
#define sf scanf
#define z long long int 
using namespace std;
int main()
{
 
    z t ;
    sf("%lld",&t);
    while(t--)
    {
    z n,i,j;
    sf("%lld",&n);
    z a[n][n];
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)    
           sf("%lld",&a[i][j]);
    for(i=0;i<n;i++)
        sort(a[i],a[i]+n);
        z m = a[n-1][n-1];
        z s =m;
        z g=1;
    for(i=n-2;i>=0;i--)
    {
            //gg=0;
        for(j=n-1;j>=0 && a[i][j]>=m ;j--)
        {
            
        }
        if(j<0){
            g=0;
            break;
        }
        m=a[i][j];
        s+=m;
    }
 
    if(g==0)
        pf("-1\n");
    else
    pf("%lld\n",s);
    }
} 
