#include <iostream>
using namespace std;


int main()
{
	int a[]= {34,15,29,8};
	int n=4;
	int round ,i, temp;

	for (int round = 1; round <= n-1; round++)

	{
		for(i=0;i<=n-1-round;i++)
		{
			if(a[i]>a[i+1])
			{
				temp = a[i];
				a[i]= a[i+1];
				a[i+1]=temp;
			}

		/* code */
		}
	}


	for(int i =0; i < n; i++)
	{
		cout<<a[i];
	}



}