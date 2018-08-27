#include <iostream>
using namespace std;

int maxSubArray(int a[], int n);

int main()
{
	int n,a[20],i;

	cout<<"enter number\n";
	cin>>n;

	cout<<"enter array\n";
	for(i=0;i<n;i++)
		cin>>a[i];

	cout<<maxSubArray(a,n);
	return 0;
}

int maxSubArray(int a[], int n)
{
	int i, max_so_far=0,max_ending_here=0;
	for(i=0;i<n;i++)
	{
		max_ending_here=max_ending_here+a[i];

		if(max_ending_here<0)
			max_ending_here=0;

		if(max_so_far< max_ending_here)
			max_so_far=max_ending_here;

	}

	return max_so_far;
	
}