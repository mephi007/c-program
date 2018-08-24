#include <iostream>
using namespace std;

int main()
{
	int i,j,n,k;
	cout<<"enter number\n";
	cin>>n;

	k=0;
	for(i= 1 ; i<= 2*n-1 ; i++)
	{
		i<=5?k++:k--;
		for(j=1 ; j<= 2*n-1; j++)
		{
			if( j<= n+1-k || j>= n-1+k)
			{
				cout<<"*";
			}
			else cout<<" ";
		}
		cout<<endl;
	}

}
