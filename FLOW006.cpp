#include <iostream>
using namespace std;
 
int main() {
	int t,n,x,s=0;
	cin>>t;
while(t--)
{s=0;	
cin>>n;
	while(n!=0)
{
		x=n%10;
		s+=x;
		n/=10;
}
cout << s << endl; 
}
	return 0;
} 
