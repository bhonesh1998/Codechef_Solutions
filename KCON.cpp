#include<bits/stdc++.h>
#define pf printf
#define sf scanf
#define mod 1000000007
#define z long long int 
using namespace std;
 
 
int main()
{
        
z i,j,n,k,t;
sf("%lld",&t);
z p,x;
while(t--)
{
        sf("%lld %lld",&n,&k);
        z a[n],b[4];
        for(i=0;i<n;i++)
            sf("%lld",&a[i]);
        p=a[0];
 
        z s,ms;
        s=ms=p;
        for(i=1;i<n;i++){
            s+=a[i];
        
        if(s<a[i])s=a[i];
        if(ms<s)ms=s;}
 
        b[0]=ms;
        for(j=1;j<4;j++)
        {
            for(i=0;i<n;i++)
            {
                s+=a[i];
                if(s<a[i])s=a[i];
                if(ms<s)ms=s;
            }
            b[j]=ms;
 
        }
        if(k<=4)
            p=b[k-1];
        else
        {
            x=b[3]-b[2];
            p=b[3]+(k-4)*x;
        }
            pf("%lld\n",p);
 
 
}
       
 
 
 
 
 
 
 
 
 
    return 0;
}
 
     
