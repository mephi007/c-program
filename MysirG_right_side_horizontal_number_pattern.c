#include <iostream>

using namespace std;

int main()
{
	int i,j,n,m,k;
	cout<<"enter row\n";
	cin>>n;
	k=0;
	for( i =1 ; i<= 2*n-1; i++)
	{
		m=1;
		i <=n ? k++ : k-- ;
		for( j= 1 ; j<= n ; j++)
		{
			if(j >= n+1 -k)
			{
				cout<<m;
				m++;
			}
			else
			{
				cout<<" ";
			}
		}

		cout<<endl;
	}

}