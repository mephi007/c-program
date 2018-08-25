#include <iostream>
using namespace std;

int main()
{
	int a[20],i,j ,k,n;
	cout<<"enter number for elements\n";
	cin>>n;
	cout<<"enter array\n";
	for(i=0; i<n ; i++)
	{
		cin>>a[i];
	}

	for(i=0;i<n ; i++)
	{
		for(j= i+1 ; j<n; j++)
		{
			if(a[i] == a[j])
			{
				for(k=j; k<n ; k++)
				{
					a[k] = a[k+1];
				}
				j--;
				n--;
			}
		}
	}

	for(i=0; i<n ; i++)
	{
		cout<<a[i];
	}
}