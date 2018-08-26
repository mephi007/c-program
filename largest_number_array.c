#include <iostream>
using namespace std;

int main()
{
	int a[5], i,j, max;

	cout<<"enter array\n";
	for(i=0 ; i<5 ; i++)
	{
		cin>>a[i];
	}
	max=a[0];
	for(i=1; i<5 ; i++)
	{
		// cout<<a[i];
		// max = a[i];
		if(max < a[i])
		{
			max=a[i];
		}

	}

	cout<<max;
	

}