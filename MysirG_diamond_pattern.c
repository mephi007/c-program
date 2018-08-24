#include <iostream>

using namespace std;

int main()
{
	int i , j , n, k=0 ;
	cout<<"enter mid of diamond\n";
	cin>>n;

	for(i = 1; i <= ((2*n)-1) ; i++)
	{
		i<=n?k++:k--;
		for( j = 1; j<= n; j++)
		{
			if(j<= k)
			{
				cout<<"*";
			}
			else
			{
				cout<<" ";
			}
		}
		//for( j = n+1; j <= 2*n-1; j++)


		cout<<endl;

	}
}