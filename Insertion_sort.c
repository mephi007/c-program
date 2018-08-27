#include <iostream>
using namespace std;


int main()
{
	int a[]= {334,57,11,18,6,69,12};
	int n=sizeof(a)/sizeof(a[0]);
	int j ,i, temp;

	for(i=0;i<n;i++)
	{
		temp = a[i];
		j=i;

		while(j>0 && temp < a[j-1])
		{
			a[j]= a[j-1];
			j--;
		}

		a[j]=temp;
		
	}

for(int i =0; i < n; i++)
	{
		cout<<a[i]<<" ";
	}



}


