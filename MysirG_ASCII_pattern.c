#include <iostream>
using namespace std;

int main()
{
	int i,j,k,n,x,y;
	cout<<"enter row\n";
	cin>>n;
	int m=n;
	x=n;
	int p=n;
	for(i=1 ; i <= n ; i++)
	{	
		y=1;
		for(j=1 ; j<= n*n; j++)
		{
			if(j<=n*m)
			{
				if(j<= x*y)
				{
					cout<<p;
				}
				p--;
				y++;
			}
			else cout<<" ";
		}
		m--;
		cout<<endl;
	}
}