#include <iostream>

using namespace std;

int main()
{
	int k,m,i,j,n;
	cout<<"enter the row:\n";
	cin>>n;

	k=1 ;
	for(i= 1 ; i<=n ; i++)
	{
		
		m = n*i + 1;
		for(j=1 ; j <= n ; j++)
		{

			if( i == 1 || i == n)
			{
				cout<<k;
				k++;
						
			}
			else if(i%2 == 0)
			{
				
				cout<<m;
				m++;
			}

			else 
			{
				cout<<m;
				m++;
			}

			if(j<n)
				cout<<"*";
			

		}
		cout<<endl;

	}

}