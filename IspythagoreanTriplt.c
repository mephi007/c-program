#include <iostream>
using namespace std;

bool Istriplet(int a[], int n)
{

	for(int i =0 ; i<n ; i++)
	{
		for(int j=0; j<n ; j++)
		{
			for(int k=0 ; k<n ; k++)
			{
				int x =a[i]*a[i];
				int y= a[j]*a[j];
				int z=a[k]*a[k];

				if(x==y+z || y==x+z || z==x+y)
					return true;
			}
		}
	}

	return false;

}

int main()
{
	int a[20], n , i;

	cout<<"enter element number\n";
	cin>>n;

	cout<<"enter array\n";
	for(i=0 ; i<n ; i++)
		cin>>a[i];

	bool ans = Istriplet(a,n);

	if(ans == true)
		cout<<"pythagorean triplet is present";
	else
		cout<<"none";

	return 0;


}