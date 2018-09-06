#include<iostream>
using namespace std;
int fib (int n)
{
int fibn[n+2];
fibn[0]=0;
fibn[1]=1;

if(fibn[n]==0)
{
	if(n<=1)
		return 1;
		else 
		return fib(n-1)+fib(n-2);
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
