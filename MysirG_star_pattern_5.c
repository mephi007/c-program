#include <iostream>
using namespace std;

int main()
{
	int n;
	cout<<"enter the number:\n";
	cin>>n;

	for(int i = 1 ; i <= n ; i++)
	{
		for(int j = 1 ; j< 2*n ; j++)
		{
			if(i%2 ==0)
			{
				if( (n-i)< j && j < (n+i) && (j%2 ==0))
				{
					cout<<"*";
				}
				else
				{
					cout<<" ";
				}

			}
			else 
			{
				if( (n-i)< j && j < (n+i) && (j%2 !=0))
					{
					cout<<"*";
				}
				else
				{
					cout<<" ";
				}
			}


		}
	cout<<endl;	
	}
}