#include <iostream>
using namespace std;

int main()
{
	int i,j,n;
	char k;

	cout<<"enter number\n";
	cin>>n;

	for(i =1 ; i<=n ; i++)
	{
		k = 64+i;
		for(j=1 ; j<=n ; j++)
		{
			if(j<=n)
			{
				cout<<k;
				k--;
			}
			else
			{
				cout<<" ";
			}
		}
	
		cout<<endl;
	}
}