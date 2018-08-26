#include <iostream>
using namespace std;

int main()
{
	int a[20], i,j,pos,n,element;

	cout<<"enter element number\n";
	cin>>n;

	cout<<"enter array\n";
	for(i=0;i<n;i++)
		cin>>a[i];

	cout<<"enter position and array\n";
	cin>>pos>>element;

	for(i=n-1;i>=pos;i--)
	{
		
		
			a[i+1]=a[i];
		
		
	}

	a[pos]=element;

	for(i=0;i<n+1;i++)
		cout<<a[i]<<" ";
}