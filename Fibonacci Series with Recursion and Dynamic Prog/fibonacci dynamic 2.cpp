#include<iostream>
using namespace std;
int fib (int n)
{
int fibn[n+2];
fibn[0]=0;
fibn[1]=1;

for(int i=2;i<=n;i++)
{
	fibn[i]=fibn[i-1]+fibn[i-2];
}
return fibn[n];

}
int main()
{
	int n=40;
	int i=1;
	while(i<n)
	{
	cout<<fib(i)<<" ";
	i++;	
	}
	
	
	
}
