#include <iostream>

using namespace std;

void pypart(int);

int main()
{
	int n;
	cout<<"enter the number of rows: \n";
	cin>>n;
	pypart(n);
	return 0;
}

void pypart(int n)
{
	for(int i =1 ; i <= n ; i++)
	{
		for(int j = 1; j<=i ; j++)
		{
			cout<<"*"<<" ";

		}
	cout<<endl;
	}
}