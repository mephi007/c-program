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

	for(i=0; i<5 ; i++)
	{
		max = a[i];
		if(max < a[i+1])
		{
			max=a[i+1];
		}

	}

	cout<<max;
	return 0;

}