#include<iostream>
using namespace std;
int fib (int n)
{
	if(n<=1)
	{
		return 1;
	}
	else return fib(n-1)+fib(n-2);
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
