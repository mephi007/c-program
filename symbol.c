#include <iostream>
using namespace std;

int main()

{
	int i,j,n,flag, k, m;
	cout<<"enter row";
	cin>>n;
	k=0;
	m=0;
	for(i=1 ; i<= n ; i++)
	{
		k=m;
		flag= 1;
		for(j=1; j<= 2*n-1; j++)
		{
			if(j<= 2*i-1)
			{
				if(flag ==1)
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
				}
				
				else cout<<"*";
				flag = 1-flag;
			}

			else cout<<" ";
		}
		cout<<endl;
	}
}