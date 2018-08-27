#include <iostream>
using namespace std;


int main()
{
	int a[]= {334,57,11,18,6,69,12};
	int n=sizeof(a)/sizeof(a[0]);
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
		cout<<a[i]<<" ";
	}



}


