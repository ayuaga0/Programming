#include <iostream>
using namespace std;


void primegen(int m,int n)
{
	int i;
	
	
		bool prime[100];
		for(int j=m;j<=n;j++)
		prime[j]=true;
		prime[1]=false;
		
		for(int p=2;p*p<=n;p++)
		{
			for(int i=m;i<=n;i++)
			{
			if(prime[i]==true)
			{
				for(int k=2*p;k<=n;k+=p)
				prime[k]=false;
			}
		}}
		for(int l=m;l<=n;l++)
		{
			if(prime[l]==true)
			{
				cout<<l<<"\n";
			}
		}
	
}


int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
		int m,n;
		cin>>m>>n;
		primegen(m,n);
		cout<<"\n";
	}

	return 0;
}
