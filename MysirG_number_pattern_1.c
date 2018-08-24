#include <iostream>
using namespace std;

int main()
{
	cout<<"enter the number for rows:\n";
	int n,k;
	cin>>n;
	for( int i =1 ; i<=n ; i++)
	{
			k=1;
		
		for(int j = 1 ; j <= n+3 ; j++)
		{
			if ( (n+1-i) <= j && j<= (n+1-i))
			{
				// cout<<"*";
				cout<<k;
				if(j<=n)
				{
					k++;
				}
				else{
					k--;
				}
			}
			else
			{
				cout<<" ";
			}
		}
		cout<<endl;
	}
return 0;
}