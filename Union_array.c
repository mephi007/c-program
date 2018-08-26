#include <iostream>
using namespace std;

int main()
{
	int a1[]={1,3,4,5,7};
	int a2[]={2,3,5,6};

	int n= sizeof(a1)/sizeof(a1[0]);
	int m= sizeof(a2)/sizeof(a2[0]);





	int i=0,j=0;

	while(i<n  && j<m)
	{
		if(a1[i] < a2[j])
		{
			cout<<a1[i++]<<" ";
			
		}
		else if(a2[j] < a1[i])
		{
			cout<<a2[j++]<<" ";
			
		}
		else
		{
			cout<<a2[j++]<<" ";
			
			i++;
		}
	}

	while(i< n)
		cout<<a1[i++]<<" ";

	while(j<m)
		cout<<a2[j++]<<" ";
}