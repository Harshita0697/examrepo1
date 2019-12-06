#include<iostream>
using namespace std;
int main()
{
	int n,p;
	cout<<" number is 12321";
	while(p!=0)
	{
		p=n/10;
		p=n%10;
		if(n==p)
		{
			cout<<"no. is palindrome";
		}
		cout<<"no. is not palindrome";
	}
return 0;
}
