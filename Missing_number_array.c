#include <iostream>
using namespace std;

int main()
{
	int a[20]= {1,2,4, ,6,3,7,8};
	int n = sizeof(a)/sizeof(a[0]);
	int total;

	total = (n*(n+1))/2;

	for(int i=0 ; i<n ; i++)
	{
		total = total - a[i];
	}

	cout<<total;

}