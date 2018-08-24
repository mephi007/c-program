#include <iostream>

using namespace std;

int main()
{
	int i , j , k , m ,n;
	cout<<" enter number\n";
	cin>>n;

	for( i =1 ; i<= n ; i++)
	{
		k=i;
		for( j =1 ; j<= 2*n-1 ; j++)
		{
			m=j;
			if( ((n+1)-i)<= j && j <= ((n-1)+i))
			{
				cout<<k;
				m<=n?k++:k--;

			}
			else 
			{
				cout<<" ";
			}

		}
		cout<<endl;
	}
}