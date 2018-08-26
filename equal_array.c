#include <iostream>
using namespace std;

int main()
{
	int i, n,m, flag, a[10], b[10];
	flag =0;

	cout<<"enter no of element for array1\n";
	cin>>n;
	cout<<"enter array1\n";
	for(i =0 ; i<n ; i++)
	{
		cin>>a[i];
	}

	cout<<"enter no of element for array2\n";
	cin>>m;
	cout<<"enter array1\n";
	for(i =0 ; i<m ; i++)
	{
		cin>>b[i];
	}

	if(n != m)
		flag = 1;

	for(i=0 ; i<n ; i++)
	{
		if(b[i] != a[i])
		{
			flag = 1;
			break;
		}

	}

	if(flag ==1)
	{
		cout<<"not equal";
	}
	else cout<<"equal";

}