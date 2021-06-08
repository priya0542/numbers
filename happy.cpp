#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,r,res=0;
	cin>>n;
	while(n)
	{
		r=n%10;
		n=n/10;
		res=res+r*r;
		if(n==0)
		{
			n=res;
		}
		if(n<10)
		{
			break;
		}
	}
	if(n==1)
	{
		cout<<"happy number"<<endl;
	}
	else{
		cout<<"not hapy number"<<endl;
	}
}
