#include <iostream>
using namespace std;

int main()

{
	int i,j,n,k=0, count=0;
	cout<<"enter row";
	cin>>n;

	
	for(i=1; i<=n ; i++)
	{
		k=count;
		for(j=1 ; j<=n ; j++)
		{
			if(j<= i)
			{
				if(i%2==0)
				{
					
					cout<<k+i;
					k --;
					count++;
				}
				else
				{
					k= k+1;
					cout<<k;

					count++;
					
				}
				
			}
			else
			{
				cout<<" ";
			}
			if(j<i)
				cout<<"*";
			
			
		}
		cout<<endl;
	}
}