
#include <iostream>
using namespace std;

int main()
{
	int num , i , a, b, c;

	cout<<"enter number\n";
	cin>>num;

	a=-1;
	b=1;

	for(i=1; i<=num ; i++)
	{
		c=a+b;
		cout<<c<<" ";
		a=b;
		b=c;
	}


}