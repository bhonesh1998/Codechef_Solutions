#include<bits/stdc++.h>
#define pf printf
#define sf scanf
#define db double 
#define z long long int 
using namespace std;
int main()
{
        set <int> s;
        int t;
        //char ch;
        sf("%d",&t);
        while(t--)
        {
        int n;
        sf("%d",&n);
        while(n--)
        {       int a;
                sf("%d",&a);
                s.insert(a);
        }
 
        pf("%d\n",(int)s.size());
        }
        
 
 
} 
