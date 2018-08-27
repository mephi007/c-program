#include <iostream>
using namespace std;


int main()
{
	int a[]= {34,15,29,8};
	int n=4;
	int j ,i,min, temp;

	for(i=0;i<n;i++)
	{
		min=i;
		for(j=i+1;j<=n-1;j++)
		{
			if(a[j]<a[min])
				min=j;
		}

		temp=a[i];
		a[i]=a[min];
		a[min]=temp;
	}

for(int i =0; i < n; i++)
	{
		cout<<a[i];
	}



}


