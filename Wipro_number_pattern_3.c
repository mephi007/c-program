#include <iostream>
using namespace std;

int main()
{
	int i ,j , m , n ,mid, k=1;

	cout<<"enter number:\n";
	cin>>n;

	if(n%2 != 0)
	{
		m = n;

	}
	else
	{
		m = n+1;
	}

	mid = (m+1)/2;
	k=1;

	for(i=1 ; i<=m ; i++)
	{
		for(j=1 ; j <= m ; j++)
		{
			if(j==mid && i>1)
			{
				cout<<k;
				k++;
			}
			else 
			{
				cout<<n;
			}
		}
		cout<<endl;
	}
}