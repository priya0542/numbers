#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,count=0;
	cin>>n;  //entering input from keyboard to n
    for(i=2;i<n-1;i++) //checking for the condition
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
    /* IF N=1 THE ABOVE CODE WILL PRINT PRIME NUMBER BUT IT IS NOT PRIME NUMBER SO THAT IS WHY I USED ELSEIF{}
    else if(n==1)
    {
    	cout<<"not primme number";
	}
	*/
	else
	{
		cout<<"prime number";
    }
}
//ANOTHER WAY FOR THE ABOVE PROGRAM
/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,count=0;
	cin>>n;  //entering input from keyboard to n
    //checking for the condition
    for(i=1;i<=n;i++)
	{
    	if(n%i==0)
		{
			count++; 
		}
    }
    if(count==2)
    {
    	cout<<"prime number";
    }
	else
	{
		cout<<" not prime number";
    }
}
*/
