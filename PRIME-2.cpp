#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,count=0;
	cin>>n;  //entering input from keyboard to n
    for(i=2;i<(n/2);i++) //checking for the condition
    {
    	if(n%i==0)
		{
			count=1; 
			break;
	    }
	}
	if(count==1)
    {
    	cout<<"not prime number";
    }
	else
	{
		cout<<"prime number";
    }
}
