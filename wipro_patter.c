#include <iostream>
using namespace std;

int main()
{
	int i,j,k,m,n;
	k=0;
	m=0;
	cout<<"enter number\n";
	cin>>n;

	for(i=1 ; i<= n ; i++)
	{
		k=m;
		for(j=1 ; j<= 2*n-1 ; j++)
		{
			if(j<= 2*i-1)
			{
				if(i%2 !=0)
				{
					k++;
					cout<<k;
					m++;

				}
				else{
					
					cout<<k+i;
					k--;
					
					m++;
				}
				if(j%2 ==0) cout<<"*";
			}
			else cout<<" ";
		}
		cout<<endl;
	}
}