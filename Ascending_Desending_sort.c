#include <iostream>
using namespace std;

int main()
{
	int a[6]={20,10,30,40};
	int temp,i,j,k;
	int n= 4;

	for(i=0;i<n;i++)
	{
		for(j=0;j<n/2;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;

			}
		}
		for(k=n/2; k<n; k++)
		{
			if(a[k]<a[k+1])
			{
				temp=a[k+1];
				a[k+1]=a[k];
				a[k]=temp;
			}
		}
	}

	for(i=0;i<n;i++)
		cout<<a[i]<<" ";
}