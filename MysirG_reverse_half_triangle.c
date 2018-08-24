#include <iostream>

using namespace std;

int main()
{
	int i , j , n;;
	cout<<"enter mid of diamond\n";
	cin>>n;

	for(i = 1; i <= n ; i++)
	{
		//i<=n?k++:k--;
		for( j = 1; j<= ((2*n)-1); j++)
		{
			if(i<=j && j<= 2*n-i)
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