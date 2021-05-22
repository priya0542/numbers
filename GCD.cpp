#include<bits/stdc++.h>
using namespace std;
int main()
{
//	int a,b;
	int gcd(int a,int b);
	{
	cin>>a>>b;
	cout<<"gcd";
	if(a==0)
	    return b;
	if (b==0)
	    return a;
	if(a>b)
	    return gcd(a-b,b);
	return gcd(a,b-a);
    }
	return 0;
}

