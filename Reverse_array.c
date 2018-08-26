#include <iostream>
using namespace std;

int main()
{
	int a[20],n,i,j,temp;

	cout<<"enter element number\n";
	cin>>n;

	cout<<"enter array\n";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	
	}

	j=i-1;
	i=0;
	while(i<j)
	{
		temp=a[j];
		a[j]=a[i];
		a[i]=temp;

		i++;
		j--;
	}
	for(i=0;i<n;i++)
	{
		cout<<a[i];
	}
}